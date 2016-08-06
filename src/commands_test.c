#include <stdio.h>
#include <stdbool.h>

#include "regs.c"
#include "commands.c"

int main()
{
    regs_init(&registers);

    uint8_t a = 30, b = 40;

    printf("%i + %i = %i \n", a, b, add_int8(&a, &b));
    printf("RFLAGS: %li \n", registers.rflags);

    uint8_t c = 200, d = 100;

    printf("%i + %i = %i \n", c, d, add_int8(&c, &d));
    printf("RFLAGS: %li \n", registers.rflags); // overflow should occur

    return 0;
}
