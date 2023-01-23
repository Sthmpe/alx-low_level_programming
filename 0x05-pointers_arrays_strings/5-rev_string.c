#include "main.h"

/**
 * rev_string - reverse a given string.
 * @s: The string to be rversed.
 */
void rev_string(char *s)
{
	long len = 0;
	long count;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	char rev_str[len];

	for (count = 0; s[count] != '\0'; count++)
	{
		len--;
		rev_str[len] = s[count];
	}
	for (count = 0; s[count] != '\0'; count++)
		s[count] = rev_str[count];
}
