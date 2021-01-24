#include<stdio.h>

// compute till nth term of 1 - 2 + 3 - 4 


void main(){
    int theN = 0;
    int sum = 0;
    printf("\nEnter the value of the Nth term: ");
    scanf("%d", &theN);

    printf("\n\nthe serise is: ");

    for(int index = 1; index <= theN; index++){
        if(index % 2 == 1){

            if(index == 1){
                printf("%d", index);
            }else{
                printf(" + %d", index);
            }

            sum += index;
        }
        else if(index % 2 == 0){
            printf(" - %d", index);

            sum -= index;
        }
    }

    printf("\n\nthe result is: %d\n\n", sum);

}