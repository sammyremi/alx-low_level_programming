#include <main.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by s wit the constant byte b
 * @s: memory to be filled
 * @b: value to be filled
 * @n: interger times b valued is going to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
