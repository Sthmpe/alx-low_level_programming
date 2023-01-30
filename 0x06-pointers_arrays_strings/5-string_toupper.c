#include "main.h"

/**
 * string_toupper - change the charcter in a string to uppercase.
 * @s: the string to change.
 *
 * Return: The updated string.
 */
char *string_toupper(char *s)
{
	int len = 0;

	for (; s[len]; len++)
        {
		if (s[len] >= 'a' &&  s[len] <= 'z')
			s[len] =  s[len] - 32;
        }
	return (s);
}
