#include "main.h"

/**
 * cap_string - change the charcter after
 * word seperator in a string to uppercase.
 * @s: the string to change.
 *
 * Return: The updated string.
 */
char *cap_string(char *s)
{
	int len = 0;

	for (; s[len]; len++)
	{
		if (s[len] == ' ' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '\t' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '\n' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == ',' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == ';' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '.' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '!' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '"' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '(' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == ')' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '{' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '}' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (s[len] == '?' && s[len + 1] >= 'a' && s[len + 1] <= 'z')
			s[len + 1] =  s[len + 1] - 32;
		else if (len == 0 && s[len] >= 'a' && s[len] <= 'z')
			s[len] =  s[len] - 32;
	}
	return (s);
}
