#include <stdio.h>

int main(int argc, char *argv[])
{
	char buffer1[1024];
	FILE *stream1 = fopen("test1.txt", "w+r");

	fprintf(stream1, "Hellooo world!2\n");
	fprintf(stream1, "Helllo world!1\n");
	fprintf(stream1, "Hello world!0\n");

	rewind(stream1);

	fscanf(stream1, "%s", buffer1);
	
	// fscanf is used to read a well formated data file.
	
	printf("%s", buffer1);
	
	

	fclose(stream1);
}