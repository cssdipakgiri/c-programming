#include<stdio.h>


void main(){

    int a = 23;
    int b = 11;


    printf("\n a or b = %d", a | b);  // 31

    /* 
        explaination:
            
        the binary eqivalent of 23 is 10111
        and the binary equivalent of 11 is 1011

        form python interpreter
        >>> bin(23)
        '0b10111'
        >>> bin(11)
        '0b1011'
        
        now, the bitwise '|' of 10111 and 1011 is 11111, which is eqivalent to 31
        but 1011 and 10111 returns a different result which is 23,

        >>> 11 or 23
        11
        >>> 23 or 11
        23

 
    */
}