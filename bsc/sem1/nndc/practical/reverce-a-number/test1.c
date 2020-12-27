#include<stdio.h>

int pow(int x, int n){
    int r = 1;
    for(int i = 0; i < n; i++){
        r *= x;
    }
    return r;
}

int main(){

    // the number to be printed revercely
    int theNumber = 0;
    int revercedNumber = 0;

    // prompting to to get the user input
    printf("Enter a number: ");
    scanf("%d", &theNumber);

    int theReminder = 0;

    while(  theNumber != 0 ){

        theReminder = theNumber % 10;
        revercedNumber = ((revercedNumber * 10) + theReminder);
        theNumber = theNumber/10;

    }


    printf("\nreverced number is %d\n", revercedNumber);

    return 0;
}