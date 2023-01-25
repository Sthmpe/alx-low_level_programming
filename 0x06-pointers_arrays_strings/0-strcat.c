#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @src: The source string or initial string.
 * @dest: The destination of the copir=ed string.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int lendest = 0;
	int i = 0;

	for (lendest = _strlen(dest); lendest <= (_strlen(dest) + _strlen(src)); lendest++)
	{
			*(dest + lendest) = *(src + i);
			i++;
	}
	return (dest);
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
