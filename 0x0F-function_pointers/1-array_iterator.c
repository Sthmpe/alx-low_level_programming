#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function given as a parameter
 *                  on each element of an array.
 * @array: The given array.
 * @size: The size of the array.
 * @action: A pointer to the function needed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
