#include "main.h"
/**
 * create_array - Create an arrays of chars, and initializes it with
 * a specific char.
 * @size: Size of the array.
 * @c: The targeted character.
 * Return: A poiter to the arrays or NULl if it fails
 *	   if size = 0 return NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	else if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(array + i) = c;
	return (array);
}
