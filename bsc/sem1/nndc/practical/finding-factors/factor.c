#include<stdio.h>


void findFactors(int number){

    printf("\nFactors of %d are: ", number);

    for(int index = 1; index <= number/2; ++index ){
       if(number % index == 0){                
           printf("%d, ", index);
        }
    }

    printf("\n\n");

}


void main(){

    int theNumber = 0;
    int* theNumberPointer = &theNumber;

    printf("\nEnter a number: ");
    scanf("%d", theNumberPointer);

    findFactors(theNumber);

}

