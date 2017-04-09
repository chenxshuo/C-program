#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("Please input two integers\n");

    scanf("%d%d", &num1, &num2);

    if ( num1 == num2 ){
        printf("%d is equal to %d\n", num1, num2);
    }

    if ( num1 != num2 );{
        printf("%d is not equal to %d\n", num1, num2);
    }

    if ( num1 < num2 ){
        printf("%d is less than %d\n", num1, num2);
    }

    if (num1 > num2 ){
        printf("%d is greater than %d \n", num1, num2);
    }

    if ( num1 <= num2 ){
        printf("%d is equal or less than %d\n", num1, num2);
    }

    if ( num1 >= num2 ){
        printf("%d if equal or greater than %d\n", num1, num2);
    }

    return 0;
    
}
