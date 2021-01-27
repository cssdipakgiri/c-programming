/* storage class in C is used to describe the following things:

1. The variable scope.
2. The location where the variable will be stored.
3. The initialized value of a variable.
4. A lifetime of a variable.
5. Who can access a variable?

auto: are local variables in c. this storage class specifier is default. decleared inside a function or block, stored in memory, value is unpredictable.

extern: are global, decleared outside all functions, stored in memory, default value is zero. 

register: are local, decleared inside a function or block, stored in CPU registers, value is garbage.


static: decleared anywhere scope depends on declearation, local in block and global outside functions, memory, zero.


*/

#include <stdio.h>

extern int d = 8;
static f = 8; // global static variable

int main(int argc, char *argv[])
{
	register int a = 7;
	
	/* You can use the register storage class when you want to store local variables within functions or blocks in CPU registers instead of RAM to have quick access to these variables */
	
	printf("%d", &a);
	auto int y = 7; // actually default local variable

	static int g = 7; // local static variable
}