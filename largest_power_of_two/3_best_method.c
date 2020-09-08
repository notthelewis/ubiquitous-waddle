/*	This method is the best way (at least the best way I can think of)
	To find the largest factor of two. It uses the check if odd method.
	However, it uses a bitmask to efficiently discover this.
*/

int bestMeth(int number)
{
	int bm = number & 1;
	if (bm == 0){
		return number;
	}
	return number -1;
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
	result = bestMeth(number);
	end = clock();
	
	cpu_time_used = ((double) (end-start)) / CLOCKS_PER_SEC;
	
	printf("This method takes %f clock cycles to compute the highest factor of 2 in: %ld \n", cpu_time_used, number);
	printf("And it gets the result %ld\n", result);
}
