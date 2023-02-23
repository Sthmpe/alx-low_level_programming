#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer  to the newly allocated space in memory which contains
 *         the content of s1, followed by the content of s2
 *         if fail to allocate return NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, index1 = 0, index2 = 0;
	char *str_concat;

	for (i = 0; s1[i]; i++)
		index1++;
	for (i = 0; s2[i]; i++)
		index2++;

	str_concat = malloc(sizeof(char) * (index1 + index2 + 1));

	if (s1 == NULL && s2 == NULL)
	{
		str_concat = '\0';
		return (str_concat);
	}
	else if (str_concat ==  NULL)
		return (NULL);

	for (i = 0; i <= index1; i++)
		str_concat[i] = s1[i];
	for (i = 0; i <= index2 + 1; i++)
		str_concat[index1++] = s2[i];

	return (str_concat);
}
