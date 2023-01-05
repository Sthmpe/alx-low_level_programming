#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the character to ne printed out
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_puthar(s[0]);
		_puts_recursion(s + 1);
	}
}
