#include "function_pointers.h"
/**
 * int_index - A function that search an integer in an array.
 * @array: The array to search through.
 * @size: The number of element in the arrray.
 * @cmp: A pointer to a function to be used to compare values.
 * Return: The index of the first element
 *        for which the cmp function dose not return zero.
 *        if no element matches, return -1.
 *        if size <= 0, return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
