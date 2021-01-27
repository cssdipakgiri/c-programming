#include <stdio.h>

int main(int argc, char *argv[])
{
	int option = 0;
	char options[] = ""
					 "\n    0. to exit"
					 "\n    1. matrix addition"
					 "\n    2. matrix multiplication"
					 "\n    3. transpose of matrix"
					 "\n";

	printf("\nOptions are: %s", options);
	printf("\nEnter your choice: ");

	scanf("%d", &option);

	int r1, r2, c1, c2, r3, c3;

	if (option == 0)
	{
		exit(1);
	}

	if (option == 1)
	{
		printf("\nEnter the number of rows of first matrix: ");
		scanf("%d", &r1);
		printf("Enter the number of columns of first matrix: ");
		scanf("%d", &c1);

		printf("\nEnter the number of rows of second matrix: ");
		scanf("%d", &r2);
		printf("Enter the number of columns of second matrix: ");
		scanf("%d", &c2);
		int matrix1[r1][c1], matrix2[r2][c2];
	}

	if (option == 3)
	{
		printf("\nEnter the number of rows of the matrix: ");
		scanf("%d", &r1);
		printf("Enter the number of columns of the matrix: ");
		scanf("%d", &c1);
		int matrix3[r1][c1];
	}

	switch (option)
	{
	case 0:
		exit(0);
		break;
	case 1:
	    continue;
	case 2:
		printf("case 1");
		printf("case 2");
	default:
		printf("\nSorry! Not a valid option!\n");
		break;
	}

	// printf("%d", matrix1[0][0] );
}