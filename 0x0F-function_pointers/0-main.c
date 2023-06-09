#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - Check if a  number is equal to 98.
 * @elem: The integer to check.
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
	return (98 == elem);
}
/**
 * is_strictly_positive - Check if a number is greater than 0.
 * @elem: The integer to check.
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}
/**
 * abs_is_98 - Check if the absoulte value of a number is 98.
 * @elem: The integer to check.
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}
int main(void)
{
	int array[7] = {0, -98, 98, 400, 402, 1024, 4096};

	printf("%d\n", int_index(array, 7, is_98));
	printf("%d\n", int_index(array, 7, abs_is_98));
	printf("%d\n", int_index(array, 7, is_strictly_positive));
	return (0);
}
