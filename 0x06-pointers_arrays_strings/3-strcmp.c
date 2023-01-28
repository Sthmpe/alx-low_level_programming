#include "main.h"

/**
 * _strcmp - compares two string.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: An integer.
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);

	if (s1_len < s2_len)
		return (-15);
	else if (s1_len > s2_len)
		return (15);
	else
		return (0);

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
