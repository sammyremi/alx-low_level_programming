#include "main.h"
/**
 * _memcpy - copy from src to dest memory
 * pointed to by s wit the constant byte b
 * @src: memory to be copy
 * @dest: destination of src memory copy
 * @n: interger times b valued is going to be filled
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	unsigned int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		dest[x] = '\0';
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
