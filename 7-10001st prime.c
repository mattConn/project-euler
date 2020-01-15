#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPrime(int n);

int main(int argc, char **argv)
{
	int count = 0;

	int n = 1;

	while(count < (argc == 2 ? atoi(argv[1]) : 10))
	{
		n++;
		if(isPrime(n))
		{
			//printf("%d\n", n);
			count++;
		}
	}
	printf("%d: %d\n", count, n);

	return 0;
}

bool isPrime(int n)
{
	int divisor = 2;
	
	while(n > 1 && n > divisor)
	{
		if(n % divisor == 0)
			return false;

		divisor++;
	}

	return true;
}