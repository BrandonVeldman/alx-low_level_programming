#include <stdio.h>
#include <math.h>
/**
 * main - find and print
 * followed by a new line
 * Return: 0 successful
 */
int main()
{
	long int n = 612852475143;
	long int i, max = 0;
		for (i = 2; i <= n; i++)
	{
	if (n % i == 0)
	{
		n = n / i;
		max = i;
	}
	}
		printf("The largest prime factor of %ld is %ld.\n", n, max);
		return 0;
}
