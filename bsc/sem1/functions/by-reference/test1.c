#include<stdio.h>

void printDoubleOf(int x){
    printf("\n\ndouble of %d is %d\n\n", x, 2 * x);
}

void main(){
    printDoubleOf(38); // by reference
}