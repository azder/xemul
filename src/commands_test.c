#include <stdio.h>

#include "regs.c"
#include "commands.c"

int main()
{
    regs_init(&registers);

    int64_t number = 41;
    mov(&number, &registers.rint.rax, sizeof(number));
    inc_int64(&registers.rint.rax);
    printf("%li \n", registers.rint.rax);

    flt64_t fltnumber = 20.39;
    dec_flt64(&fltnumber);
    printf("%f \n", fltnumber);

    int64_t add1 = 20, add2 = 22;
    printf("%li", add_int64(&add1, &add2));

    return 0;

}
