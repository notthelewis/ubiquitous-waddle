/*
	C program with pointer logic to carry out the bubble sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* Uses a temp variable to swap array elements by reference */
void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/* Sorts array elements using the bubble sort algorithm */
void bubbleSort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n-1; i++)
		for(j = 0; j < n-i-1; j++)
			if(arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}

/* Used to print the contents of the array */
void printArray(int arr[], int size)
{
	int i; 
	for (i = 0; i < size; i++)
		printf("%d\n", arr[i]);
	printf("\n");
}

/* Generates 12 random numbers and passes them through to bubbleSort and printArray */
int main()
{
	int arr[12], i;
	int n = sizeof(arr)/sizeof(arr[0]);

	/* Fills arr[] with random integers */
	srand(time(NULL));
	for (i = 0; i < 11; i++) {
		arr[i] = rand() % 20 ;
	}


	printf("Unsorted array: \n");
	printArray(arr, n);

	printf("Sorted array: \n");
	bubbleSort(arr, n);

	printArray(arr, n);
	return 0;
}
