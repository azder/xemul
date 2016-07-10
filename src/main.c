#include <stdio.h>
#include <stdint.h>

#include "custom.h"

#include "types.h"


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

int main()
{
    printallsz();
    return 0;
}