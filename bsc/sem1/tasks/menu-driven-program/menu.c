/**
 * title: a menu driven program in c to implement array operations.
 *  author: dipak giri, 17.1.2021
 **/

// todo: odd, even, no duplicate values, squares, cubes,

#include <stdio.h>

// colors for output
#define RED   "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW   "\x1B[33m"
#define BLUE   "\x1B[34m"
#define MAGENTA   "\x1B[35m"
#define NEO   "\x1B[36m"
#define RESET "\x1B[0m"

// global variables, to access anywhere in entire program.
int size, option, array[], wantsToExit = 0;

// global methods.
void takeArrayInput();
void showOptions();
void evaluateOptions();

// operations.
void printReverseOfElements();
void printSumOfElements();
void printAvarageOfElements();
void printMinimumValue();
void printMaximumValue();
void printOddValues();
void printEvenValues();
void printWithoutDuplicateValues();

int main()
{
	printf(GREEN "\nprogram: Array Operator!\n\n" RESET);
	printf(MAGENTA "Enter size of array: " RESET);
	scanf("%d", &size);
	
	

	if (size == 0)
	{
		printf(RED "\ncannot operate with an array of zero elements!\n" RESET);
	}
	else if (size == 1)
	{

		takeArrayInput();
		printf("\nthere is only one element in the array! that is %d\n", array[0]);
	}
	else
	{
		takeArrayInput();
		showOptions();
    	printf(NEO);
	    evaluateOptions();
		printf(RESET);
		
	}

	return 0;
}

void takeArrayInput()
{
	// taking array elements, one by one.
	printf("\n\n\nEnter %d elements of the: \n", size);
	for (int index = 0; index < size; index++)
	{
		printf("> ");
		scanf("%d", &array[index]);
	}
}

void showOptions()
{
	printf(YELLOW "\n\nthe options are: ");
	printf("\n  0. to exit from program!");
	printf("\n  1. print sum of elements");
	printf("\n  2. print elements in reverse order");
	printf("\n  3. print avarage of elements");
	printf("\n  4. print minimum valued element in array");
	printf("\n  5. print maximum valued element in array");
	printf("\n  6. print odd elements in array");
	printf("\n  7. print even elements in array");
	printf("\n  8. print array without a duplicate element." RESET);

	printf("\n\n\nenter your option: ");
	scanf("%d", &option);
}

void evaluateOptions()
{
	/**
	  *
	  *
	  **/
	switch (option)
	{
	case 0:
		printf("\nprogram terminated by you!\n");
		exit(0);
		break;
	case 1:
		printSumOfElements();
		break;
	case 2:
		printReverseOfElements();
		break;
	case 3:
		printAvarageOfElements();
		break;
	case 4:
		printMinimumValue();
		break;
	case 5:
		printMaximumValue();
		break;
	case 6:
		printOddValues();
		break;
	case 7:
		printEvenValues();
		break;
	case 8:
		printWithoutDuplicateValues();
		break;
	default:
		printf("\nsorry! it's not a valid option!\n");
	}
}

void printReverseOfElements()
{
	printf("reversed array is: ");
	for (int index = size - 1; index > 0; index--)
	{
		printf(" %d", array[index]);
	}
	printf(".\n");
}

void printSumOfElements()
{
	int sumOfElements = 0;
	for (int index = 0; index < size; index++)
	{
		sumOfElements += array[index];
	}
	printf("\nsum of all element of the array is: %d\n", sumOfElements);
}

void printAvarageOfElements()
{
	int sumOfElements = 0;
	for (int index = 0; index < size; index++)
	{
		sumOfElements += array[index];
	}
	printf("\navarage of all element of the array is: %d\n", sumOfElements / size);
}

void printMinimumValue()
{
	int min = 0;
	for (int index = 0; index < size - 1; index++)
	{
		min = array[index] < array[index + 1] ? array[index] : array[index + 1];
	}
	printf("\nminimum valued elemen in array is: %d\n", min);
}

void printMaximumValue()
{
	int max = 0;
	for (int index = 0; index < size - 1; index++)
	{
		max = array[index] > array[index + 1] ? array[index] : array[index + 1];
	}
	printf("\nmaximum valued elemen in array is: %d\n", max);
}

void printOddValues()
{
	printf("\nodd elements are: ");
	for (int index = 0; index < size; index++)
	{
		if (array[index] == 1)
		{
			printf("%d, ", array[index]);
		}
		else if (array[index] % 2 == 1)
		{
			printf("%d, ", array[index]);
		}
	}
	printf("\n");
}
void printEvenValues()
{
	printf("\neven elements are: ");
	for (int index = 0; index < size; index++)
	{
		if (array[index] % 2 == 0)
		{
			printf("%d, ", array[index]);
		}
	}
	printf("\n");
}
void printWithoutDuplicateValues()
{
	int temp[size];
	int j = 0;
	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] != array[i + 1])
		{
			temp[j++] = array[i];
		}
	}
	temp[j++] = array[size - 1];
	for (int i = 0; i < j; i++)
	{
		array[i] = temp[i];
	}
	printf("\nnew array without duplicate element is: ");
	printf("  %d  ", j);
	for(int index = 0; index < j; index++){
		printf("%d, ", temp[index]);
	}
	printf("\n");
	
}