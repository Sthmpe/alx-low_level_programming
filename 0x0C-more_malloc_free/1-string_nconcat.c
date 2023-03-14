#include "main.h"
/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of byte.
 * Return: NULL if the function fails.
 *         A pointer o a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len = 0, i;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (n + length(s1) + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		str[len++] = s2[i];
	str[len++] = '\0';
	return (str);
}
/**
 * length - Count the length of a given string.
 * @str: The given string.
 * Return: The length.
 */
int length(char *str)
{
	int length = 0;

	if (str != NULL)
	{
		while (str[length])
			length++;
	}
	return (length);
}
