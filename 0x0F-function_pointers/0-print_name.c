#include "function_pointers.h"
/**
 * print_name - print a name.
 * @name: The name to be printed out.
 * @f: The that print a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
