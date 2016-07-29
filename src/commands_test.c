#include <stdio.h>

#include "regs.c"
#include "commands.c"

int main()
{
    regs_init(&registers);

    int64_t number = 41;
    mov(&number, &registers.rint.rax, sizeof(number));
    inc_int64(&registers.rint.rax);
    printf("%i \n", registers.rint.rax);

    flt64_t fltnumber = 20.39;
    inc_flt64(&fltnumber);
    printf("%f \n", fltnumber);

    return 0;

}
