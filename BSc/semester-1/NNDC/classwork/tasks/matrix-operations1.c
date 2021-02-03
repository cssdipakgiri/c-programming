#include <stdio.h>
void calculation(int option);

int main(int argc, char *argv[])
{
	int option = 0;
	char options[] = ""
					 "\n    0. to exit"
					 "\n    1. matrix addition"
					 "\n    2. matrix subtraction"
					 "\n    3. matrix multiplication"
					 "\n    4. transpose of matrix"
					 "\n    5. continue"
					 "\n";

	printf("\nOptions are: %s", options);
	printf("\nEnter your choice: ");

	scanf("%d", &option);

	switch (option)
	{
	case 0:
		exit(0);
		break;
	case 1:
	case 2:
	case 3:
		calculation(option);
		break;
	case 4:

		// transpose

		printf("\nSorry! Not a valid option!\n");
		break;
	}
}

void calculation(int option)
{
	int r1, r2, c1, c2, r3, c3;
	int isMatricesValidForOperation = 1;
	printf("\nEnter r1: ");
	scanf("%d", &r1);
	printf("Enter c1: ");
	scanf("%d", &c1);

	printf("\nEnter r2: ");
	scanf("%d", &r2);
	printf("Enter c2: ");
	scanf("%d", &c2);

	int matrix1[r1][c1], matrix2[r2][c2];

	if (!(r1 == r2 && c1 == c2) && ((option == 1) || (option == 2)))
	{
		printf("\nAdditive error: can't add or subtract, order of the two matrices are not same!\n");
		isMatricesValidForOperation = 0;
	}
	else if (!(c1 == r1) && (option == 3))
	{
		printf("\nMultiplicative error: can't multiply, number of columns of first matrix and  number of rows of second matrix are not same!\n");
		isMatricesValidForOperation = 0;
	}

	if (isMatricesValidForOperation)
	{
		// take inputs.
		printf("\nEnter first matrix of order (%d, %d):\n", r1, c1);
		int i = 0, j = 0;

		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				printf("    ");
				scanf("%d", &matrix1[i][j]);
			}
		}

		printf("\nyou entered: \n");
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			{
				printf("    %d", matrix1[i][j]);
			}
			printf("\n");
		}

		// take inputs.
		printf("\n\nEnter second matrix of order (%d, %d):\n", r2, c2);

		for (int i = 0; i < r2; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				printf("    ");
				scanf("%d", &matrix2[i][j]);
			}
		}

		printf("\nyou entered: \n");
		for (int i = 0; i < r2; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				printf("    %d", matrix2[i][j]);
			}
			printf("\n");
		}

		if (option == 1)
		{
			int sum[r1][c1];
			for (int i = 0; i < r1; i++)
			{
				for (int j = 0; j < c1; j++)
				{
					sum[i][j] = matrix1[i][j] + matrix2[i][j];
				}
			}

			// print the result
			printf("\nresult of addition is: \n");
			for (int i = 0; i < r2; i++)
			{
				for (int j = 0; j < c2; j++)
				{
					printf("    %d", sum[i][j]);
				}
				printf("\n");
			}
		}
		else if (option == 2)
		{
			int sub[r1][c1];
			for (int i = 0; i < r1; i++)
			{
				for (int j = 0; j < c1; j++)
				{
					sub[i][j] = matrix1[i][j] - matrix2[i][j];
				}
			}

			// print the result
			printf("\nresult of subtraction is: \n");
			for (int i = 0; i < r2; i++)
			{
				for (int j = 0; j < c2; j++)
				{
					printf("    %d", sub[i][j]);
				}
				printf("\n");
			}
		}
		else if (option == 3)
		{
			// TODO: MULTIPLICATION
		}
		else if (option == 4)
		{
			// TODO: TRANSPOSE
		}
		else if (option == 5)
		{
			// TODO: CONTINUE
		}
	}
}
