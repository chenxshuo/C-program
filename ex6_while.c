#include <stdio.h>

int main(void)
{
    int counter = 1;

    while ( counter <= 10 ){
        printf("%d\n", counter);
        ++counter;
    }
    
    int counter1 = 0;

    while( ++counter1 <= 10 ){
        printf("%d\n", counter1);
    }
    return 0;
        
}
