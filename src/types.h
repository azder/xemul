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

typedef int8_t *pint8_t;
typedef int16_t *pint16_t;
typedef int32_t *pint32_t;
typedef int64_t *pint64_t;

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
} intregs_t, *pintregs_t;

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
} mmxregs_t, *pmmxregs_t;

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
} sseregs_t, *psseregs_t;

typedef struct i32regs_t
{
    pint32_t eax;
    pint32_t ecx;
    pint32_t edx;
    pint32_t ebx;
    pint32_t esi;
    pint32_t edi;
    pint32_t esp;
    pint32_t ebp;
    pint32_t r8d;
    pint32_t r9d;
    pint32_t r10d;
    pint32_t r11d;
    pint32_t r12d;
    pint32_t r13d;
    pint32_t r14d;
    pint32_t r15d;
} i32regs_t, *pi32regs_t;

typedef struct i16regs_t
{
    pint16_t ax;
    pint16_t cx;
    pint16_t dx;
    pint16_t bx;
    pint16_t si;
    pint16_t di;
    pint16_t sp;
    pint16_t bp;
    pint16_t r8w;
    pint16_t r9w;
    pint16_t r10w;
    pint16_t r11w;
    pint16_t r12w;
    pint16_t r13w;
    pint16_t r14w;
    pint16_t r15w;
} i16regs_t, *pi16regs_t;

typedef struct i8lregs_t
{
    pint8_t al;
    pint8_t cl;
    pint8_t dl;
    pint8_t bl;
    pint8_t sil;
    pint8_t dil;
    pint8_t spl;
    pint8_t bpl;
    pint8_t r8b;
    pint8_t r9b;
    pint8_t r10b;
    pint8_t r11b;
    pint8_t r12b;
    pint8_t r13b;
    pint8_t r14b;
    pint8_t r15b;
} i8lregs_t, *pi8lregs_t;

typedef struct i8hregs_t
{
    pint8_t ah;
    pint8_t ch;
    pint8_t dh;
    pint8_t bh;
    pint8_t sih;
    pint8_t dih;
    pint8_t sph;
    pint8_t bph;
} i8hregs_t, *pi8hregs_t;

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

} regs_t, *pregs_t;

#endif //XEMUL_TYPES_H
