#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of array
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int prim_d = 0;
	int sec_d = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		 prim_d += a[i];
		 a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		  sec_d += a[i];
		  a -= size;
	}
	printf("%d, %d\n", prim_d, sec_d);

}
