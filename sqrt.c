#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

    float num,root;
    bool validInput = false;

    printf("Enter the number: ");
    scanf("%f",&num);

    if (num >= 0){
         root = sqrt(num);
          printf("The square root is: %2f",root);
          validInput = true;
    }else{
        printf("Error :the number must be positive!");
    }

    return 0;
} 
