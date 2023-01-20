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

	for (int count = 0; s[count] != '\0'; count++)
		len++;

	return (len);
}

