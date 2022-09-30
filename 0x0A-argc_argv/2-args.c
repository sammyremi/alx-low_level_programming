#include"main.h"
#include <stdio.h>
/**
 * main - printing all argument recieved
 * @argc: count
 * @argv: vector
 * Return: return 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
