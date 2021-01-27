#include<stdio.h>

int main(){
    char colorCode;
    printf("\nenter color code: ");
    scanf("%c", &colorCode);

    switch(colorCode){
        case 'w': 
            printf("\nwhite\n\n");
            break;
        case 'W':
            printf("\nwhite\n\n");
            break;
        case 'g':        
           printf("\ngreen\n\n");              
           break;                                   
        case 'G': 
           printf("\ngreen\n\n");
           break;
        default:
            printf("\noption is not available!\n\n");
    }

    return 0;
}
