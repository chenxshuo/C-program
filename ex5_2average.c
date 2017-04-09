#include <stdio.h>
int main(viod)
{
    int counter;
    int grade;
    int total;

    float average;

    total = 0;
    counter = 0;

    printf("Please input grade and input -1 to stop : ");
    scanf("%d", &grade);

    while (grade != -1 ){
        total = total + grade;
        counter = counter + 1;

        printf("Please input grade and nput -1 to stop: ");
        scanf("%d", &grade);
    }

    if (counter != 0){
        average = (float) total / counter;
        printf("Class average is : %.2f\n", average );
    }
    else {
        printf("No grades were entered\n");
    }

    return 0;

}

