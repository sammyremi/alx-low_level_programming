#include <stdio>
#include <math.h>

/**
 * main - prints the largest prime number
 * print newline
 *
 * Return: Always 0
 */

int main(void)
{
	int prime;
	long int x;

	x = 612852475143;

	for (prime = 2; prime <= sqrt(x); prime++)
	{
		if (x % prime == 0)
		{
			x = x / prime;
			prime = 1;
		}
	}
	printf("%ld\n", x);
return (0);
}
