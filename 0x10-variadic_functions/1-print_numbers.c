#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Print numbers followed by new line.
 * @separator: The string to be printed between numbers if
 *             if separator is NULL don't print it.
 * @n: The numbers of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
