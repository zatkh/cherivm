/*
 * Copyright (C) 2008 Robert Lougher <rob@jamvm.org.uk>.
 *
 * This file is part of JamVM.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

unsigned char shared_opcodes[] = {
    /* OPC_NOP             */  OPC_NOP,
    /* OPC_ACONST_NULL     */  OPC_ICONST_0,
    /* OPC_ICONST_M1       */  OPC_ICONST_M1,
    /* OPC_ICONST_0        */  OPC_ICONST_0,
    /* OPC_ICONST_1        */  OPC_ICONST_1,
    /* OPC_ICONST_2        */  OPC_ICONST_2,
    /* OPC_ICONST_3        */  OPC_ICONST_3,
    /* OPC_ICONST_4        */  OPC_ICONST_4,
    /* OPC_ICONST_5        */  OPC_ICONST_5,
    /* OPC_LCONST_0        */  OPC_LCONST_0,
    /* OPC_LCONST_1        */  OPC_LCONST_1,
    /* OPC_FCONST_0        */  OPC_ICONST_0,
    /* OPC_FCONST_1        */  OPC_FCONST_1,
    /* OPC_FCONST_2        */  OPC_FCONST_2,
    /* OPC_DCONST_0        */  OPC_LCONST_0,
    /* OPC_DCONST_1        */  OPC_DCONST_1,
    /* OPC_BIPUSH          */  OPC_BIPUSH,
    /* OPC_SIPUSH          */  OPC_SIPUSH,
    /* OPC_LDC             */  OPC_LDC,
    /* OPC_LDC_W           */  OPC_LDC_W,
    /* OPC_LDC2_W          */  OPC_LDC2_W,
    /* OPC_ILOAD           */  OPC_ILOAD,
    /* OPC_LLOAD           */  OPC_LLOAD,
    /* OPC_FLOAD           */  OPC_ILOAD,
    /* OPC_DLOAD           */  OPC_LLOAD,
    /* OPC_ALOAD           */  OPC_ILOAD,
    /* OPC_ILOAD_0         */  OPC_ILOAD_0,
    /* OPC_ILOAD_1         */  OPC_ILOAD_1,
    /* OPC_ILOAD_2         */  OPC_ILOAD_2,
    /* OPC_ILOAD_3         */  OPC_ILOAD_3,
    /* OPC_LLOAD_0         */  OPC_LLOAD_0,
    /* OPC_LLOAD_1         */  OPC_LLOAD_1,
    /* OPC_LLOAD_2         */  OPC_LLOAD_2,
    /* OPC_LLOAD_3         */  OPC_LLOAD_3,
    /* OPC_FLOAD_0         */  OPC_ILOAD_0,
    /* OPC_FLOAD_1         */  OPC_ILOAD_1,
    /* OPC_FLOAD_2         */  OPC_ILOAD_2,
    /* OPC_FLOAD_3         */  OPC_ILOAD_3,
    /* OPC_DLOAD_0         */  OPC_LLOAD_0,
    /* OPC_DLOAD_1         */  OPC_LLOAD_1,
    /* OPC_DLOAD_2         */  OPC_LLOAD_2,
    /* OPC_DLOAD_3         */  OPC_LLOAD_3,
    /* OPC_ALOAD_0         */  OPC_ALOAD_0,
    /* OPC_ALOAD_1         */  OPC_ILOAD_1,
    /* OPC_ALOAD_2         */  OPC_ILOAD_2,
    /* OPC_ALOAD_3         */  OPC_ILOAD_3,
    /* OPC_IALOAD          */  OPC_IALOAD,
    /* OPC_LALOAD          */  OPC_LALOAD,
    /* OPC_FALOAD          */  OPC_IALOAD,
    /* OPC_DALOAD          */  OPC_LALOAD,
    /* OPC_AALOAD          */  OPC_AALOAD,
    /* OPC_BALOAD          */  OPC_BALOAD,
    /* OPC_CALOAD          */  OPC_CALOAD,
    /* OPC_SALOAD          */  OPC_SALOAD,
    /* OPC_ISTORE          */  OPC_ISTORE,
    /* OPC_LSTORE          */  OPC_LSTORE,
    /* OPC_FSTORE          */  OPC_ISTORE,
    /* OPC_DSTORE          */  OPC_LSTORE,
    /* OPC_ASTORE          */  OPC_ISTORE,
    /* OPC_ISTORE_0        */  OPC_ISTORE_0,
    /* OPC_ISTORE_1        */  OPC_ISTORE_1,
    /* OPC_ISTORE_2        */  OPC_ISTORE_2,
    /* OPC_ISTORE_3        */  OPC_ISTORE_3,
    /* OPC_LSTORE_0        */  OPC_LSTORE_0,
    /* OPC_LSTORE_1        */  OPC_LSTORE_1,
    /* OPC_LSTORE_2        */  OPC_LSTORE_2,
    /* OPC_LSTORE_3        */  OPC_LSTORE_3,
    /* OPC_FSTORE_0        */  OPC_ISTORE_0,
    /* OPC_FSTORE_1        */  OPC_ISTORE_1,
    /* OPC_FSTORE_2        */  OPC_ISTORE_2,
    /* OPC_FSTORE_3        */  OPC_ISTORE_3,
    /* OPC_DSTORE_0        */  OPC_LSTORE_0,
    /* OPC_DSTORE_1        */  OPC_LSTORE_1,
    /* OPC_DSTORE_2        */  OPC_LSTORE_2,
    /* OPC_DSTORE_3        */  OPC_LSTORE_3,
    /* OPC_ASTORE_0        */  OPC_ISTORE_0,
    /* OPC_ASTORE_1        */  OPC_ISTORE_1,
    /* OPC_ASTORE_2        */  OPC_ISTORE_2,
    /* OPC_ASTORE_3        */  OPC_ISTORE_3,
    /* OPC_IASTORE         */  OPC_IASTORE,
    /* OPC_LASTORE         */  OPC_LASTORE,
    /* OPC_FASTORE         */  OPC_IASTORE,
    /* OPC_DASTORE         */  OPC_LASTORE,
    /* OPC_AASTORE         */  OPC_AASTORE,
    /* OPC_BASTORE         */  OPC_BASTORE,
    /* OPC_CASTORE         */  OPC_CASTORE,
    /* OPC_SASTORE         */  OPC_CASTORE,
    /* OPC_POP             */  OPC_POP,
    /* OPC_POP2            */  OPC_POP2,
    /* OPC_DUP             */  OPC_DUP,
    /* OPC_DUP_X1          */  OPC_DUP_X1,
    /* OPC_DUP_X2          */  OPC_DUP_X2,
    /* OPC_DUP2            */  OPC_DUP2,
    /* OPC_DUP2_X1         */  OPC_DUP2_X1,
    /* OPC_DUP2_X2         */  OPC_DUP2_X2,
    /* OPC_SWAP            */  OPC_SWAP,
    /* OPC_IADD            */  OPC_IADD,
    /* OPC_LADD            */  OPC_LADD,
    /* OPC_FADD            */  OPC_FADD,
    /* OPC_DADD            */  OPC_DADD,
    /* OPC_ISUB            */  OPC_ISUB,
    /* OPC_LSUB            */  OPC_LSUB,
    /* OPC_FSUB            */  OPC_FSUB,
    /* OPC_DSUB            */  OPC_DSUB,
    /* OPC_IMUL            */  OPC_IMUL,
    /* OPC_LMUL            */  OPC_LMUL,
    /* OPC_FMUL            */  OPC_FMUL,
    /* OPC_DMUL            */  OPC_DMUL,
    /* OPC_IDIV            */  OPC_IDIV,
    /* OPC_LDIV            */  OPC_LDIV,
    /* OPC_FDIV            */  OPC_FDIV,
    /* OPC_DDIV            */  OPC_DDIV,
    /* OPC_IREM            */  OPC_IREM,
    /* OPC_LREM            */  OPC_LREM,
    /* OPC_FREM            */  OPC_FREM,
    /* OPC_DREM            */  OPC_DREM,
    /* OPC_INEG            */  OPC_INEG,
    /* OPC_LNEG            */  OPC_LNEG,
    /* OPC_FNEG            */  OPC_FNEG,
    /* OPC_DNEG            */  OPC_DNEG,
    /* OPC_ISHL            */  OPC_ISHL,
    /* OPC_LSHL            */  OPC_LSHL,
    /* OPC_ISHR            */  OPC_ISHR,
    /* OPC_LSHR            */  OPC_LSHR,
    /* OPC_IUSHR           */  OPC_IUSHR,
    /* OPC_LUSHR           */  OPC_LUSHR,
    /* OPC_IAND            */  OPC_IAND,
    /* OPC_LAND            */  OPC_LAND,
    /* OPC_IOR             */  OPC_IOR,
    /* OPC_LOR             */  OPC_LOR,
    /* OPC_IXOR            */  OPC_IXOR,
    /* OPC_LXOR            */  OPC_LXOR,
    /* OPC_IINC            */  OPC_IINC,
    /* OPC_I2L             */  OPC_I2L,
    /* OPC_I2F             */  OPC_I2F,
    /* OPC_I2D             */  OPC_I2D,
    /* OPC_L2I             */  OPC_L2I,
    /* OPC_L2F             */  OPC_L2F,
    /* OPC_L2D             */  OPC_L2D,
    /* OPC_F2I             */  OPC_F2I,
    /* OPC_F2L             */  OPC_F2L,
    /* OPC_F2D             */  OPC_F2D,
    /* OPC_D2I             */  OPC_D2I,
    /* OPC_D2L             */  OPC_D2L,
    /* OPC_D2F             */  OPC_D2F,
    /* OPC_I2B             */  OPC_I2B,
    /* OPC_I2C             */  OPC_I2C,
    /* OPC_I2S             */  OPC_I2S,
    /* OPC_LCMP            */  OPC_LCMP,
    /* OPC_FCMPL           */  OPC_FCMPL,
    /* OPC_FCMPG           */  OPC_FCMPG,
    /* OPC_DCMPL           */  OPC_DCMPL,
    /* OPC_DCMPG           */  OPC_DCMPG,
    /* OPC_IFEQ            */  OPC_IFEQ,
    /* OPC_IFNE            */  OPC_IFNE,
    /* OPC_IFLT            */  OPC_IFLT,
    /* OPC_IFGE            */  OPC_IFGE,
    /* OPC_IFGT            */  OPC_IFGT,
    /* OPC_IFLE            */  OPC_IFLE,
    /* OPC_IF_ICMPEQ       */  OPC_IF_ICMPEQ,
    /* OPC_IF_ICMPNE       */  OPC_IF_ICMPNE,
    /* OPC_IF_ICMPLT       */  OPC_IF_ICMPLT,
    /* OPC_IF_ICMPGE       */  OPC_IF_ICMPGE,
    /* OPC_IF_ICMPGT       */  OPC_IF_ICMPGT,
    /* OPC_IF_ICMPLE       */  OPC_IF_ICMPLE,
    /* OPC_IF_ACMPEQ       */  OPC_IF_ICMPEQ,
    /* OPC_IF_ACMPNE       */  OPC_IF_ICMPNE,
    /* OPC_GOTO            */  OPC_GOTO,
    /* OPC_JSR             */  OPC_JSR,
    /* OPC_RET             */  OPC_RET,
    /* OPC_TABLESWITCH     */  OPC_TABLESWITCH,
    /* OPC_LOOKUPSWITCH    */  OPC_LOOKUPSWITCH,
    /* OPC_IRETURN         */  OPC_IRETURN,
    /* OPC_LRETURN         */  OPC_LRETURN,
    /* OPC_FRETURN         */  OPC_IRETURN,
    /* OPC_DRETURN         */  OPC_LRETURN,
    /* OPC_ARETURN         */  OPC_IRETURN,
    /* OPC_RETURN          */  OPC_RETURN,
    /* OPC_GETSTATIC       */  OPC_GETSTATIC,
    /* OPC_PUTSTATIC       */  OPC_PUTSTATIC,
    /* OPC_GETFIELD        */  OPC_GETFIELD,
    /* OPC_PUTFIELD        */  OPC_PUTFIELD,
    /* OPC_INVOKEVIRTUAL   */  OPC_INVOKEVIRTUAL,
    /* OPC_INVOKESPECIAL   */  OPC_INVOKESPECIAL,
    /* OPC_INVOKESTATIC    */  OPC_INVOKESTATIC,
    /* OPC_INVOKEINTERFACE */  OPC_INVOKEINTERFACE,
    /* UNUSED OPCODE       */  0,
    /* OPC_NEW             */  OPC_NEW,
    /* OPC_NEWARRAY        */  OPC_NEWARRAY,
    /* OPC_ANEWARRAY       */  OPC_ANEWARRAY,
    /* OPC_ARRAYLENGTH     */  OPC_ARRAYLENGTH,
    /* OPC_ATHROW          */  OPC_ATHROW,
    /* OPC_CHECKCAST       */  OPC_CHECKCAST,
    /* OPC_INSTANCEOF      */  OPC_INSTANCEOF,
    /* OPC_MONITORENTER    */  OPC_MONITORENTER,
    /* OPC_MONITOREXIT     */  OPC_MONITOREXIT,
    /* OPC_WIDE            */  OPC_WIDE,
    /* OPC_MULTIANEWARRAY  */  OPC_MULTIANEWARRAY,
    /* OPC_IFNULL          */  OPC_IFEQ,
    /* OPC_IFNONNULL       */  OPC_IFNE,
    /* OPC_GOTO_W          */  OPC_GOTO,
    /* OPC_JSR_W           */  OPC_JSR
};
