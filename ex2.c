#include <stdio.h>

int main(void)
{
    int integer1;
    int integer2;
    int sum;

    printf("Please Enter first integer\n");
    scanf("%d", &integer1);

    printf("Please Enter second integer\n");
    scanf("%d", &integer2);

    sum = integer1 + integer2;
    printf("Sum if %d\n", sum);
    printf("Sum is %d\n", integer1 + integer2);

    return 0;

}
