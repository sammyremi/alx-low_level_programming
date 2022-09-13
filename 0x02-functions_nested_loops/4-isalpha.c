#include "main.h"

/**
 * _isalpha - Entry point
 *
 *@c:character to be checked isalpha
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' c <= 'Z'))
	{
		return (1);
	}
	
	return (0);
}
