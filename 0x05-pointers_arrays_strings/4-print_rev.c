#include "main.h"

/**
 * print_rev - print string in reverse.
 * @s: The string to be printed out.
 */
void print_rev(char *s)
{
	long len = 0;
	long count;

	for (count = 0; s[count] != '\0'; count++)
		len++;
	for (count = len - 1; count > -1; count--)
		_putchar(s[count]);
	_putchar('\n');
}
