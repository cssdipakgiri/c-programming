#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char a[] = "yes", b[] = " no";
	printf("%s", strcat(a, b));
}