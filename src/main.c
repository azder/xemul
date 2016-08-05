#include <stdio.h>
#include <stdint.h>
#include "custom.h"

#include "regs.h"


void printsz(char *type, size_t size)
{
    printf("%s: \t%d B\n", type, (int) size);
};

void printallsz()
{
    printsz("int8_t", sizeof(int8_t));
    printsz("int16_t", sizeof(int16_t));
    printsz("int32_t", sizeof(int32_t));
    printsz("int64_t", sizeof(int64_t));
    printsz("flt32_t", sizeof(flt32_t));
    printsz("flt64_t", sizeof(flt64_t));
    printsz("flt80_t", sizeof(flt80_t));
    printsz("flt128_t", sizeof(flt128_t));
    printsz("regs_t", sizeof(regs_t));
}

void printregs(pregs_t pregs)
{
    // *pregs->ri8l.al = 1;
    // *pregs->ri8h.ch = 2;
    // *pregs->ri16.dx = 4;
    // *pregs->ri32.ebx = 16;

    pintregs_t ri = &pregs->rint;

    printf("rax: 0x%08" PRIx64 "\n", ri->rax);
    printf("rcx: 0x%08" PRIx64 "\n", ri->rcx);
    printf("rdx: 0x%08" PRIx64 "\n", ri->rdx);
    printf("rbx: 0x%08" PRIx64 "\n", ri->rbx);

}

int main()
{

    regs_t regs;
    pregs_t pregs = &regs;

    regs_init(pregs);

    printregs(pregs);
    printallsz();
    
    printf("%s", "Hristos voskrese! Vistina voskrese!" );
    return 12;
}