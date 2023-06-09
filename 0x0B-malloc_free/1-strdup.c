#include "main.h"
/**
 * _strdup - Returns a pointer to a new string which
 *           is a duplicate of the string str.
 * @str: The string to be duplicated.
 * Return: A pointer to the new string.
 *         if str = NULL returns NULL.
 *         if memory is insufficient return NULL.
 */
char *_strdup(char *str)
{
	int i, index = 1;
	char *string;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		index++;

	string = malloc(sizeof(char) * index);

	if (string == NULL)
		return (NULL);

	for (i = 0; i <= index; i++)
		string[i] = str[i];

	return (string);
}
