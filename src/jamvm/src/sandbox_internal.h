#ifndef __SANDBOX_INTERNAL_H__
#define __SANDBOX_INTERNAL_H__

#ifdef JNI_CHERI

#include "jni.h"

#include <machine/cheri.h>
#include <machine/cheric.h>
#include <machine/cpuregs.h>

#include <cheri/sandbox.h>
#include <cheri/cheri_class.h>
#include <cheri/cheri_enter.h>
#include <cheri/cheri_system.h>

#define DEFAULT_SANDBOX_MEM 4*MB

typedef struct cherijni_sandbox {
	struct sandbox_class    *classp;
	struct sandbox_object   *objectp;
	__capability void       *code_env;
} cherijniSandbox;

extern register_t cherijni_trampoline(register_t methodnum,
                               register_t a1, register_t a2, register_t a3, register_t a4,
                               register_t a5, register_t a6, register_t a7,
                               struct cheri_object system_object, __capability void *c3,
                               __capability void *c4, __capability void *c5,
                               __capability void *c6, __capability void *c7)
                               __attribute__((cheri_ccall));


#endif

#endif //__SANDBOX_INTERNAL_H__
