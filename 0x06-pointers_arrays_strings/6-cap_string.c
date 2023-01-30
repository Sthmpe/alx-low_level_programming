#include "main.h"

/**
 * cap_string - change the charcter after word seperator in a string to uppercase. 
 * @s: the string to change.
 *
 * Return: The updated string.
 */
char *cap_string(char *s)
{
	int len = 0;

	for (; s[len]; len++)
	{
		if (s[len] == 32 || s[len] == 33)
                        if
			s[len + 1] =  s[len + 1] - 32;
	}
	return (s);
}
