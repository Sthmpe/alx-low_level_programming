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

	for (;*s != '\0'; *s++)
	{
		len++;
	}
	return (len);
}

