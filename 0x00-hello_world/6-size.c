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

	printf("Size of a char: %zu byt(e)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longItype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llItype));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
