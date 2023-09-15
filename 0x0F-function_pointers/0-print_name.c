#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: The name of the be printed
 * @f: A pointer to a function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
