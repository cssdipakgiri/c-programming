#include<stdio.h>

void printBox(int column, int row){
	for(int x = 0; x < row; x++){
		for(int y = 0; y < column; y++){
			printf("*");
		}
		printf("\n");
	}
}

void main(){
	printBox(4, 5);
}
