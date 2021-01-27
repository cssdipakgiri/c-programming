
// (!!condition)*statementA + (!condition)*statementB 

// '==' ooerator A ^ B

int greaterThan(int a, int b){
	return !!(a-b);
}
int lessThan(int a, int b){
	return !(b-a);
}
int equalTo(int a, int b){
	return !greaterThan(a, b) * !lessThan(a, b);
}
#include<stdio.h>
int main(int argc, char *argv[])
{
	
	printf("%d", equalTo(7,7));
	
	
}