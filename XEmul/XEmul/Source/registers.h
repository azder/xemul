#include <inttypes.h>

typedef struct iregs 
{
    int64_t           rax;
    int64_t           rcx;
    int64_t           rdx;
    int64_t           rbx;
    int64_t           rsi; 
    int64_t           rdi;
    int64_t           rsp;
    int64_t           rbp;
    int64_t           r8;
    int64_t           r9;
    int64_t           r10;
    int64_t           r11;
    int64_t           r12;
    int64_t           r13;
    int64_t           r14;
    int64_t           r15;
} iregs;

typedef struct mmxregs
{
    double            mm0;
    double            mm1;
    double            mm2;
    double            mm3;
    double            mm4;
    double            mm5;
    double            mm6;
    double            mm7;
} mmxregs;

typedef struct int_32regs
{
    int32_t * const  pEAX;
	int32_t * const  pECX;
	int32_t * const  pEDX;
	int32_t * const  pEBX;
	int32_t * const  pESI;
	int32_t * const  pEDI;
	int32_t * const  pESP;
	int32_t * const  pEBP;
	int32_t * const  pR8D;
	int32_t * const  pR9D;
	int32_t * const  pR10D;
	int32_t * const  pR11D;
	int32_t * const  pR12D;
	int32_t * const  pR13D;
	int32_t * const  pR14D;
	int32_t * const  pR15D;
} int_32regs;

typedef struct int_16regs 
{
	int16_t * const  pAX;
	int16_t * const  pCX;
	int16_t * const  pDX;
	int16_t * const  pBX;
	int16_t * const  pSI;
	int16_t * const  pDI;
	int16_t * const  pSP;
	int16_t * const  pBP;
	int16_t * const  pR8W;
	int16_t * const  pR9W;
	int16_t * const  pR10W;
	int16_t * const  pR11W;
	int16_t * const  pR12W;
	int16_t * const  pR13W;
	int16_t * const  pR14W;
	int16_t * const  pR15W;
} int_16regs;

typedef struct int_8regs
{
    int8_t * const   pAL;
    int8_t * const   pCL;
    int8_t * const   pDL;
    int8_t * const   pBL;
    int8_t * const   pSIL;
    int8_t * const   pDIL;
    int8_t * const   pSPL;
    int8_t * const   pBPL;
    int8_t * const   pR8B;
    int8_t * const   pR9B;
    int8_t * const   pR10B;
    int8_t * const   pR11B;
    int8_t * const   pR12B;
    int8_t * const   pR13B;
    int8_t * const   pR14B;
    int8_t * const   pR15B;
} int_8regs;

typedef struct register_file
{
    iregs          integer_registers;
    mmxregs        mmx_registers;
    int_32regs      int_32_registers;
    int_16regs      int_16_registers;
    int_8regs       int_8_registers;
} register_file;

register_file   registers;