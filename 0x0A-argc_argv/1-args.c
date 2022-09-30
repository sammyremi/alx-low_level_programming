#include"main.h"
#include <stdio.h>
/**
 * main - printing number of argument
 * @argc: count
 * @argv: vector
 * Return: return 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc > 0 || sizeof(*argv) / sizeof(*argv) > 0)
	{
		printf("%d\n", (argc - 1));
	}

	return (0);
}
