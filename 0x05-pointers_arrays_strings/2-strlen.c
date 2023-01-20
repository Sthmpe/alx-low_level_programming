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

	do {
		len++;
		*s++;
	} while (*s == '\0');
	return (len);
}

