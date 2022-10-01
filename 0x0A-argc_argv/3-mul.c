#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply two numbers
 * @argc: count
 * @argv: vector
 * Return: return 0 if success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int total = 0;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		if (argc > 0)
		{
			i = atoi(argv[1]);
			j = atoi(argv[2]);
			total = (i * j);

			printf("%d\n", total);
		}
	}
	return (0);
}
