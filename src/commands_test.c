#include <stdio.h>
#include <stdbool.h>

#include "regs.c"
#include "commands.c"

int main()
{
    regs_init(&registers);

    int8_t a = 30, b = 30;

    printf("%i + %i = %i \n", a, b, add_int8(&a, &b));
    printf("RFLAGS: %li \n", registers.rflags);

    int8_t c = -30, d = 20;

    printf("%i + %i = %i \n", c, d, add_int8(&c, &d));
    printf("RFLAGS: %li \n", registers.rflags); // overflow should occur

    return 0;
}
