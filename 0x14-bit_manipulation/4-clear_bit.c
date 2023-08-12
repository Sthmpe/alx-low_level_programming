#include "main.h"
/**
 * clear_bit - Clears the bit at a given index.
 * @n: Pointer to the number.
 * @index: Index of the bit to clear.
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1 << index;
	*n = *n & ~mask;

	return (1);
}
