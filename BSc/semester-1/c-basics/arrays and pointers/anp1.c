int main(int argc, char *argv[])
{
	int a = 7;
	printf("*&a = %d", *&a); // 7
	printf("%d", &a);
	
	
	
	int arr[] = {10, 21, 32, 55, 33, 56};
	printf("\narr = %d", arr); // array stores an address of the first element of that array.
	printf("\n%d", *arr); // 1st element.
	printf("\n%d", *(arr+1)); // 2nd element
	
	volatile *p1 = arr;
	p1 += 2; // incrementing the pointer
	printf("\n*p1 = %d", *p1);
	printf("\n*(arr) = %d", *(arr)); // 1st element
	
	*(arr); // now pointing the second element.
	printf("\n*(arr) = %d", *arr); 
	
	
}