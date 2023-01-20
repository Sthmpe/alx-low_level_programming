#include "main.h"

/**
 * _puts - print string
 * @str: Tge strign to be printed out.
 */
void _puts(char *str)
{
	long len = 0;

	do {
		if (*str == '\0')
		{
			_putchar(str[len]);
			break;
		}
		_putchar(str[len]);
		len++;
	} while (str[len]);
	_putchar('\n');
}
