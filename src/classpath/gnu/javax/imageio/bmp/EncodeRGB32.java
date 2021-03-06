/* EncodeRGB32.java --
   Copyright (C) 2006 Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */


package gnu.javax.imageio.bmp;

import java.awt.image.BufferedImage;
import java.awt.image.PixelGrabber;
import java.io.IOException;

import javax.imageio.IIOImage;
import javax.imageio.ImageWriteParam;
import javax.imageio.metadata.IIOMetadata;
import javax.imageio.stream.ImageOutputStream;

public class EncodeRGB32
    extends BMPEncoder
{
  protected BMPInfoHeader infoHeader;
  protected BMPFileHeader fileHeader;
  protected long offset;

  /**
   * Constructs an instance of this class.
   *
   * @param fh - the file header to use.
   * @param ih - the info header to use.
   */
  public EncodeRGB32(BMPFileHeader fh, BMPInfoHeader ih)
  {
    super();
    fileHeader = fh;
    infoHeader = ih;
    offset = BMPFileHeader.SIZE + BMPInfoHeader.SIZE;
  }

  /**
   * The image encoder.
   *
   * @param o - the image output stream
   * @param streamMetadata - metadata associated with this stream, or null
   * @param image - an IIOImage containing image data.
   * @param param - image writing parameters, or null
   * @exception IOException if a write error occurs
   */
  public void encode(ImageOutputStream o, IIOMetadata streamMetadata,
                     IIOImage image, ImageWriteParam param) throws IOException
  {
    int size;
    int value;
    int j;
    int rowCount;
    int rowIndex;
    int lastRowIndex;
    int[] bitmap;
    byte rgb[] = new byte[4];
    size = (infoHeader.biWidth * infoHeader.biHeight) - 1;
    rowCount = 1;
    rowIndex = size - infoHeader.biWidth;
    lastRowIndex = rowIndex;
    try
      {
        bitmap = new int[infoHeader.biWidth * infoHeader.biHeight];
        PixelGrabber pg = new PixelGrabber((BufferedImage) image.getRenderedImage(),
                                           0, 0, infoHeader.biWidth,
                                           infoHeader.biHeight, bitmap, 0,
                                           infoHeader.biWidth);
        pg.grabPixels();

        for (j = 0; j < size; j++)
          {
            value = bitmap[rowIndex];

            rgb[0] = (byte) (value & 0xFF);
            rgb[1] = (byte) ((value >> 8) & 0xFF);
            rgb[2] = (byte) ((value >> 16) & 0xFF);
            rgb[3] = (byte) ((value >> 24) & 0xFF);
            o.write(rgb);
            if (rowCount == infoHeader.biWidth)
              {
                rowCount = 1;
                rowIndex = lastRowIndex - infoHeader.biWidth;
                lastRowIndex = rowIndex;
              }
            else
              rowCount++;
            rowIndex++;
          }
      }
    catch (Exception wb)
      {
        wb.printStackTrace();
      }
  }
}
