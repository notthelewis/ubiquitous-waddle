/* C program for merge sort algorithm */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*	Used to merge two subarrays of given array
	first	is arr[l..m]
	second	is arr[m+1..r]
*/

void merge(int arr[], int l, int m, int r) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* Creates two temporary arrays */
	int L[n1], R[n2];

	/* Copies first	half of the data to array L[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];

	/* Copies second half of the data to array R[] */
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0; // Initial index of L
	j = 0; // Initital index of R
	k = l; // Initial index of merged array

	/* Merges the temporary arrays */
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copies the remaining elements of L */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copies the remaining elements of R */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

/*  L is the left index and R is the right index */
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    } 
}

/* Spits out the contents of the array*/
void printArray(int A[], int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("%d\n", A[i]);
	}
	printf("\n");
}

int main() {

	int arr[12], i;
	int arr_size = sizeof(arr) / sizeof(int);

    /* Uses epoch time as a seed for rand() */
    srand(time(NULL));
    for (i=0; i<11; i++) {
    	arr[i] = rand() % 25;
    }

    printf("Given array is \n"); 
    printArray(arr, arr_size); 

    mergeSort(arr, 0, arr_size - 1); 

 	printf("\nSorted array is \n"); 
	printArray(arr, arr_size); 
    return 0; 
}
