#include <stdio.h>

int main(void)
{
    int product;

    product = 2 ;
    while ( product <= 1000)
        product = product * 2;

    printf("%d\n", product);

    return 0;
}
