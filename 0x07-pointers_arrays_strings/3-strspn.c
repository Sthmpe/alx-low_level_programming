#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist of bytes from accept.
 * @s: The initial string.
 * @accept: The string to compare with.
 *
 * Return: The number byte.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n = 0;
	int j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; j >= 0; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
			else if (accept[j] == '\0')
			{
				return (n);
			}
		}
	}
	return (n);
}
