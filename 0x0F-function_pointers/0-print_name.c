#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints name
 * @name: first name
 * @f: function pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
		if (name && f)
			f(name);
}
