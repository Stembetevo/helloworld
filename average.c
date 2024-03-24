#include <stdio.h>

int main(){
    int scores[5]={23,21,20,15,16};
     int largest = scores[0];
     int smallest = scores[0];


     for(int i=1; i<5; i++){
        if (scores[i] > largest){
            largest = scores[i];
        }else if (scores[i] < smallest) {
            smallest = scores[i];
        };
    
     }

      printf("The largest number is: %d\n", largest);
      printf("The smallest number is: %d\n",smallest);
    return 0;
}