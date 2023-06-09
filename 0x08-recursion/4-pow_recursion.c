#include "main.h"

/**
 * _pow_recursion - calculate the power of exponent of a given number
 * @x: The number to be caclated
 * @y: The exponent of the  number
 *
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
	{
		x *= _pow_recursion(x, y - 1);
		return (x);
	}
	else
		return (-1);
}
