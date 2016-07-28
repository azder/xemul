#include <stdio.h>

#include "regs.c"
#include "commands.c"

int main()
{
    regs_init(&registers);

    int64_t number = 42;
    MOV(&number, &registers.rint.rax, sizeof(number));
    printf("%i \n", registers.rint.rax);
    INC(&number);
    printf("%i \n", registers.rint.rax);

    int32_t number2 = 24;
    MOV(&number2, &registers.ri32.eax, sizeof(number2));
    printf("%i \n", registers.ri32.eax);
    INC(&number);
    printf("%i \n", registers.ri32.eax);

    return 0;

}
