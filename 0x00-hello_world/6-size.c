#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long longItype;
	long long llItype;
	float floatType;

	printf("Size of char: %zu byt(e)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longItype));
	printf("Size of long long int: %zu byte(s)\n", sizeof(llItype));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
