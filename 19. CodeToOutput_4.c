#include <stdio.h>

int main() {
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int number;
    printf("Please enter a number:\n");
    scanf("%d", &number);

    if(number < 200)
        printf("Number is less than 200!\n");
    else if(number == 200)
        printf("Number is 200!\n");
    else
        printf("Number is greater than 200!\n");

    printf("\n\n\t\t\tCoding is Fun!\n\n\n");

    return 0;
}
