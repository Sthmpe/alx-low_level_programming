#include "main.h"

/**
 * _puts - print string
 * @str: Tge strign to be printed out.
 */
void _puts(cahr *str)
{
	long len = 0;

	do {
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[len]);
		len++;
	} while (s[len]);
}
