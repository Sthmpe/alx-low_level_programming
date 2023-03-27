#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Print anything.
 * @format: A list of types of argument passed to the function.
 *	    where c : char
		  i : integer
		  f : float
		  s : char * (if string is NULL, print '(nil)')
		  any other char are ignored.
 */
void print_all(const char * const format, ...)
{
	va_list list;

	va_start(list)
	
}
