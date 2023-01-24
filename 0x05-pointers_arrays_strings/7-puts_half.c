#include "main.h"

/**
 * puts_half -print half of the a given string.
 * @str: The given string.
 */
void puts_half(char *str)
{
	int len;

	len = _strlen(str) - 1;
	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len - 1) / 2;
	do {
		if (str[len] != 0)
		{
			_putchar(str[len]);
			len++;
		}
		else
			break;
	} while (str[len]);
	_putchar('\n');
}

/**
 * _strlen - measure tht length of string
 * @s: the string yo be measured.
 *
 * Return: the lenght of string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	do {
		if (*s == '\0')
			break;

		len++;
	} while (s[len]);

	return (len);
}
