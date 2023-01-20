#include "main.h"

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
		len++;
		if (*s == '\0')
			break;
	} while (s[len]);

	return (len);
}

