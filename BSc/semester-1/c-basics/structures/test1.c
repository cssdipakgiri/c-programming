#include <stdio.h>

struct marksheet
{
	int history;
	int geography;
} dipak, bidyut;

struct student
{
	int id;
	int age;
} std_dipak;

int main(int argc, char *argv[])
{
	printf("\nEnter marks of dipak obtained in history: ");
	scanf("%d", &dipak.history);
	printf("Enter marks of bidyut obtained in history: ");
	struct marksheet *bidyutptr = &bidyut;
	scanf("%d", &bidyutptr->history);

	// bidyut is a pointer, so we can use -> operator. struct marksheet* bidyut;

	/// very important note on pointer of structures.
	// • donot declear and use pointer of struct variable directly, use a pointer to hold and access the adress and value of structure variable.

	struct student std_dipak2 = {.id = 7, .age = 5};
	// deassignment of properties
	struct student studentsA[5]; // array of structurea
}