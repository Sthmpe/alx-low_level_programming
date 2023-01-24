#include "main.h"

/**
 * _strcpy - copy a string to another string.
 * @src: The source string or initial string.
 * @dest: The destination of the copir=ed string.
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *src);
{
	int len = 0;

	do {
		dest[len] = src[len];
		if (src[len] == '\0')
		{
			dest[len] = src[len];
			break;
		}
	} while (len++);

	return (dest);
}
