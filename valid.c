#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    bool validInput = false;

    printf("Enter the number: ");
    scanf("%d",&num);

    if ( num >= 0 ){
        printf("The number is POSITIVE!");
        validInput = true;
    }else{
        printf("The number is NEGATIVE!");
        validInput = false;
    }
    return 0;
}