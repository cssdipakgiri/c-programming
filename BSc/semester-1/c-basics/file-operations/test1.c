// file operations
#include <stdio.h>
int main(int argc, char *argv[])
{
	FILE *stream1 = fopen("test1.txt", "w");

	// clear file
	// by writing no charecters in the file stream.
	fprintf(stream1, "");

	fputs("hello world! this is 2021!\n", stream1);

	stream1 = fopen("test1.txt", "r");

	char buffer1[1] = "";
	int bufferLength = 2;

	while (fgets(buffer1, bufferLength, stream1) != NULL)
	{
		printf("%s", buffer1);
	}
	
	// reading charecter bu charecter
	char ch = fgetc(stream1);
	while(ch == EOF){
		ch = fgetc(stream1);
		printf("%c", ch);
	}
	
	fclose(stream1);
	return 0;
}

/*
    int fscanf(FILE *stream, const char *format, ...);
*/