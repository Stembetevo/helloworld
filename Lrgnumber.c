#include <stdio.h>

int main() {
    int scores[5] = {90, 839, 75, 91, 76};
    int largest = scores[0];

    for(int i = 1; i < 5; i++) { 
        if (scores[i] > largest) {  
            largest = scores[i];
        }
    }

    printf("The largest number is: %d\n", largest); 

    return 0;
}
