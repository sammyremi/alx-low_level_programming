#include "function_pointers.h"

/**
 * print_name - print name of pass to function
 * @name: name to print
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
