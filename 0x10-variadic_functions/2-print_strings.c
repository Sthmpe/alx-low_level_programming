#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Print strings followed by new line.
 * @separator: The string to be printed between numbers if
 *             if separator is NULL don't print it.
 * @n: The numbers of integers passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
        char *va_str;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
                        va_str = va_arg(list, char *);
                        if (va_str == NULL)
                                printf("(nil)");
                        else
			        printf("%s", va_str);
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(list);
}
