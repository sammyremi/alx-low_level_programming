#include <stdio.h>

/**
 * main - printing fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int n = 100;
	int i = 1;

	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			if (i < 100)
				putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i < 100)
				putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i < 100)
				putchar(' ');
		}
		else
		{
			printf("%d", i);
			if (i < 100)
				putchar(' ');
		}
	}
	printf("\n");
return (0);
}
