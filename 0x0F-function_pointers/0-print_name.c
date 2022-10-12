#include "function_pointers.h"

/**
 * print_name - print name of pass to function
 * @name: name to print
 * @f: fuction pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
