#include "main.h"

/**
 * _puts - print string
 * @str: Tge strign to be printed out.
 */
void _puts(char *str)
{
	long len = 0;

	do {
		_putchar(str[len]);
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}
		len++;
	} while (str[len]);
}
