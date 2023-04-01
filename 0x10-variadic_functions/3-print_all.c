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
	int i = 0;
	char *va_str;
	int index = len_of_format(format);

	va_start(list, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
			{
				va_str = va_arg(list, char*);
				if (va_str == NULL)
					va_str = "(nil)";
				printf("%s", va_str);
				break;
			}
			default:
				break;
		}
		i++;
		if (i < index - 1)
		{
			switch (format[i])
			{
				case 'c':
					printf(", ");
					break;
				case 'i':
					printf(", ");
					break;
				case 'f':
					printf(", ");
					break;
				case 's':
					printf(", ");
					break;
				default:
					break;
			}
		}
	}
	va_end(list);
	printf("\n");
}

int len_of_format(const char * const format)
{
	int index = 0;
	while (format[index++]);
	return (index);
}