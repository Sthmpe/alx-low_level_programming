#include "main.h"

/**
 * string_toupper - change the charcter in a string to uppercase.
 * @s: the string to change.
 *
 * Return: The updated string.
 */
char *string_toupper(char *s)
{
	int len;

	for (len = 0; s[len] != '0'; len++)
	{
		if (s[len] > 96 &&  s[len] < 123)
                {
			s[len] =  s[len] - 32;
                }
	}
	return (s);
}
