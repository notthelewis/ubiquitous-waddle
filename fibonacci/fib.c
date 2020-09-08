/* C program to spit out the first 100 fibonacci numbers */
#include <stdio.h>

unsigned long long fib(int n)
{
	unsigned long long f[n+2], i;
	f[0] = 0;
	f[1] = 1;

	for (i=2; i <= n; i++) {
		f[i] = f[i-1] + f[i-2];
	}

	return f[n];
}

int main()
{
	int i;
	unsigned long long result;

	for (i=0; i<101; i++){
		result = fib(i);
		printf("%d = %llu\n",i, result);
	}

	return 0;
}
