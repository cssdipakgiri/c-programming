#include <stdio.h>

union abc {
	int a;  // 4 bytes
	char c; // 1 byte
} var1;
int main(int argc, char *argv[])
{
	var1.a = 7;
	var1.c = 'f';
	printf("\nc is %c", var1.c);
	var1.a = 66; // also affecting var1.c as 'B'
	printf("\nc is %c", var1.c);
	printf("\nsize of var1 is: %lu", sizeof(var1)); // 4 bytes
}