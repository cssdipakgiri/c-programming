#include<stdio.h>

void main(){
    
    int theNumber = 0;
    float sumOfSerise = 0.000;
    
    printf("\nEnter a Number: ");
    scanf("%d", &theNumber);

    printf("\nYou Entered %d\n", theNumber);
    printf("\nthe serise is: ");

    for(int index = 1; index <= theNumber; index++){
        printf(" 1/%0.3f + ", (float)index);
        sumOfSerise += 1/(float)index;
    }

    printf("\nthe sum of serise is %0.3f\n\n", sumOfSerise);

}