/*	C program to find the largest factor of two in a given number. This method works using modulus.
	if the modulus of n % 2 is equal to 0, it must be an even number... Therefore, return it.
	Otherwise, return n - 1.
*/

int checkOdd(int number)
{
	if (number % 2 == 0) {
		 return number;
	}

	return number-1;
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
	result = checkOdd(number);
	end = clock();
	
	cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
	
	printf("This method takes %f clock cycles to compute the highest factor of 2 in: %ld \n", cpu_time_used, number);
	printf("And it gets the result %ld\n", result);
}
