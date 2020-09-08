/*
    C program to find the largest factor of two in a given number. With smaller numbers it runs fine... But as soon as you start introducing 
    bigger numbers it starts to scale terribly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*	The loop starts from one (because 0*0 = 0) and accounts for this
	By adding one to half of the given number.
*/
int getFactorOfTwo(int number)
{
	int i, x; 
	for (i = 1; i<(number/2)+1; i++) {
		x = i * 2;
	}
	return x;
}

int main(int argc, char const *argv[])
{
	if (argc == 1){
		printf("Exiting, no args\n");
		return 0;
	}
	
	long number = atoi(argv[1]), result;
	clock_t start, end; 
	double cpu_time_used; 
	
	start = clock();
	result = getFactorOfTwo(number);
	end = clock();
	
	cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
	
	printf("This method takes %f clock cycles to compute the highest factor of 2 in: %ld \n", cpu_time_used, number);
	printf("And it gets the result %ld\n", result);
}
