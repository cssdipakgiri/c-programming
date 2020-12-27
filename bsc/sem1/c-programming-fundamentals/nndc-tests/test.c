#include<stdio.h>

void main(){
    int i, n;
    float s = 0;
    printf("\nEnter the range of the serice: ");
    scanf("%d", &n); // placeholder %d instade of %f for an integer.


    printf("The sum of the serice: ");

    for(i = 1; i <= n; i++){
        s = s + (float) 1/i; // type casting
        printf(" 1/%d +", i);
    }
    printf(" = %0.20f\n", s);
}