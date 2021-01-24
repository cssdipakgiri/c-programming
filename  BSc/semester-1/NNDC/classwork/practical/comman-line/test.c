#include<stdio.h>

int main(int argc, char *argv[])
{
	printf("parameter arguments are: ");
	for(int index = 0; index < argc; index++){
		printf("%s ", argv[index]);
	}
}