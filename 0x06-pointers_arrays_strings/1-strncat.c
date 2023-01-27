#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates n character of a string into another string.
 * @src: The source string or initial string.
 * @dest: The destination of the copir=ed string.
 * @n: The nuber of character to be concatenates.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest = _strlen(dest);
	int i = 0;
	int lenfinal = _strlen(dest) + n;

	for (; lendest <= lenfinal; lendest++)
	{
		if (i < n && src[i])
		{
			*(dest + lendest) = *(src + i);
			i++;
		}
		else
			break;
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
