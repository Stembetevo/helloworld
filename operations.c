#include <stdio.h>

int main() {
    int num1, num2, num3, sum;
    double avg , division;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;
    avg = (double) sum / 3;
    division = num1 / num2;

    printf("The division of num1 and num2 is: %.2f",division);
    printf("The sum of the three numbers is: %d\n", sum);
    printf("The average of the three numbers is: %.2f\n", avg);

    return 0;
}