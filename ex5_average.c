#include <stdio.h>

int main(void)
{
    int counter;
    int grade;
    int total;
    int average;


    total = 0;
    counter = 1;

    while ( counter <= 5){
        printf("Please input the grade: ");
        scanf("%d", &grade );
        total = total + grade;
        counter = counter + 1;
    }
    average = total / 5;

    printf("The average of the class is %d\n", average);

    return 0;

}

