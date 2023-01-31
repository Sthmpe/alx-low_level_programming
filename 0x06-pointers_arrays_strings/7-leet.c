#include "main.h"

/**
 * leet - Encode a string
 * @s: the string to be encoded.
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
	int len = 0;
	int index;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[++len])
	{
		for (index = 0; index <= 7; index++)
		{
			if (s[len] == leet[index] ||
			s[len] - 32 == leet[index])
				s[len] = index + '0';
		}
	}
	return (s);
}
