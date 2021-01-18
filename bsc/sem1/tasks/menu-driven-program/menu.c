






void printReverseOfElements(int size){
	
}



int main(){
    
    int size, option;
    
	printf("Enter size of array: ");
	scanf("%d", &size);

	int array[9];

	// taking array elements 

	for(int index = 0; index < size; index++){
		scanf("%d", &array[index]);
	}

	printf("Enter the option: ");
	scanf("%d", &option);

	printf("\n1 - print sum of elements\n");
	printf("\n2 - print elements in reverse order\n");

	
	switch(option){
	  case 1:
	    printSumOfElements(size);
	    break;
	  case 2: 
	    printReverseOfElements(size);
	    break;
	}

	return 0;
	
}



void printSumOfElements(int size){
     int sumOfElements = 0;
     for(int index = 0; index < size; index++){
       sumOfElements += array[index];
     }
 }

