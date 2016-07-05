#include <inttypes.h>

typedef struct iregs 
{
    int64_t     rax;
    int64_t     rcx;
    int64_t     rdx;
    int64_t     rbx;
    int64_t     rsi;
    int64_t     rdi;
    int64_t     rsp;
    int64_t     rbp;
    int64_t     r8;
    int64_t     r9;
    int64_t     r10;
    int64_t     r11;
    int64_t     r12;
    int64_t     r13;
    int64_t     r14;
    int64_t     r15;
} iregs;

typedef struct mmxregs
{
    double      mm0;
    double      mm1;
    double      mm2;
    double      mm3;
    double      mm4;
    double      mm5;
    double      mm6;
    double      mm7;
} mmxregs;

typedef struct register_file
{
    iregs       integer_registers;
    mmxregs     mmx_registers;
} register_file;

register_file   registers;

 