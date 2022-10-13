#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two variables
 * @a: first variable
 * @b: second variable
 * Return: an integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two variables
 * @a: first variable
 * @b: second variable
 * Return: an integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two variables
 * @a: first variable
 * @b: second variable
 * Return: an integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two variables
 * @a: first variable
 * @b: second variable
 * Return: an integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the divided variables
 * @a: first variable
 * @b: second variable
 * Return: an integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
