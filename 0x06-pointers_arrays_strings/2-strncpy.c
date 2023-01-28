#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy a n of character from a src string to a dest string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of string element or index to copy.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];

	if (src[index] == '\0')
		dest[index] = src[index];

	return (dest);
}
