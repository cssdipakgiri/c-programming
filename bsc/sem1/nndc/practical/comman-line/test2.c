/**
 * author: dipak giri, 20.1.2021
 * title: c program on command line arguments.
 **/

#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("\nargument you entered during execution are: ");
	for (int index = 0; index < argc; index++)
	{
		printf("%s", argv[index]);
		if (index < argc - 1)
		{
			printf(", ");
		}
	}
}