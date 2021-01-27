#include<stdio.h>

int doubleOf(int x){
    return 2 * x;
}

void main(){
    printf("\ndouble of integer 17 is doubleOf(17) = %d\n\n", doubleOf(17)); // by value
}