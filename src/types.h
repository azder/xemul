//
// Created by azder on 08/07/2016.
//

#ifndef XEMUL_TYPES_H
#define XEMUL_TYPES_H


#include <inttypes.h>
#include <float.h>

typedef float flt32_t;
typedef double flt64_t;
typedef long double flt80_t;

#ifdef __llvm__
typedef long double flt128_t;
#else
#pragma clang diagnostic push
#pragma ide diagnostic ignored "CannotResolve"
typedef __float128 flt128_t;
#pragma clang diagnostic pop
#endif

typedef struct intregs_t
{
    int64_t rax;
    int64_t rcx;
    int64_t rdx;
    int64_t rbx;
    int64_t rsi;
    int64_t rdi;
    int64_t rsp;
    int64_t rbp;
    int64_t r8;
    int64_t r9;
    int64_t r10;
    int64_t r11;
    int64_t r12;
    int64_t r13;
    int64_t r14;
    int64_t r15;
} intregs_t;

typedef struct mmxregs_t
{
    flt64_t mmx0;
    flt64_t mmx1;
    flt64_t mmx2;
    flt64_t mmx3;
    flt64_t mmx4;
    flt64_t mmx5;
    flt64_t mmx6;
    flt64_t mmx7;
} mmxregs_t;

typedef struct sseregs_t
{
    flt128_t xmm0;
    flt128_t xmm1;
    flt128_t xmm2;
    flt128_t xmm3;
    flt128_t xmm4;
    flt128_t xmm5;
    flt128_t xmm6;
    flt128_t xmm7;
    flt128_t xmm8;
    flt128_t xmm9;
    flt128_t xmm10;
    flt128_t xmm11;
    flt128_t xmm12;
    flt128_t xmm13;
    flt128_t xmm14;
    flt128_t xmm15;
} sseregs_t;

typedef struct i32regs_t
{
    int32_t *const eax;
    int32_t *const ecx;
    int32_t *const edx;
    int32_t *const ebx;
    int32_t *const esi;
    int32_t *const edi;
    int32_t *const esp;
    int32_t *const ebp;
    int32_t *const r8d;
    int32_t *const r9d;
    int32_t *const r10d;
    int32_t *const r11d;
    int32_t *const r12d;
    int32_t *const r13d;
    int32_t *const r14d;
    int32_t *const r15d;
} i32regs_t;

typedef struct i16regs_t
{
    int16_t *const ax;
    int16_t *const cx;
    int16_t *const dx;
    int16_t *const bx;
    int16_t *const si;
    int16_t *const di;
    int16_t *const sp;
    int16_t *const bp;
    int16_t *const r8w;
    int16_t *const r9w;
    int16_t *const r10w;
    int16_t *const r11w;
    int16_t *const r12w;
    int16_t *const r13w;
    int16_t *const r14w;
    int16_t *const r15w;
} i16regs_t;

typedef struct i8lregs_t
{
    int8_t *const al;
    int8_t *const cl;
    int8_t *const dl;
    int8_t *const bl;
    int8_t *const sil;
    int8_t *const dil;
    int8_t *const spl;
    int8_t *const bpl;
    int8_t *const r8b;
    int8_t *const r9b;
    int8_t *const r10b;
    int8_t *const r11b;
    int8_t *const r12b;
    int8_t *const r13b;
    int8_t *const r14b;
    int8_t *const r15b;
} i8lregs_t;

typedef struct i8hregs_t
{
    int8_t *const al;
    int8_t *const cl;
    int8_t *const dl;
    int8_t *const bl;
    int8_t *const sil;
    int8_t *const dil;
    int8_t *const spl;
    int8_t *const bpl;
    int8_t *const r8b;
    int8_t *const r9b;
    int8_t *const r10b;
    int8_t *const r11b;
    int8_t *const r12b;
    int8_t *const r13b;
    int8_t *const r14b;
    int8_t *const r15b;
} i8hregs_t;

typedef struct regs_t
{

    // specific registers
    int64_t rip;
    int64_t reflags;

    // available register files
    intregs_t rint;
    mmxregs_t rmmx;
    sseregs_t rsse;

    // register aliases
    i8lregs_t ri8l;
    i8hregs_t ri8h;
    i16regs_t ri16;
    i32regs_t ri32;

} regs_t;

#endif //XEMUL_TYPES_H
