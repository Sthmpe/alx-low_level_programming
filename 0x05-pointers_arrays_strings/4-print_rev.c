#include "main.h"

/**
 * print_rev - print string in reverse.
 * @s: The string to be printed out.
 */
void print_rev(char *s)
{
	long len = 0;

	do {
		if (*s == '\0')
		{
			if (len > 0)
			{
				do {
					len--;
					_putchar(s[len]);
					if (len == 0)
						break;
				} while (s[len]);
				break;
			}
			else
				break;
		}
		len++;
	} while (s[len]);
	_putchar('\n');
}
