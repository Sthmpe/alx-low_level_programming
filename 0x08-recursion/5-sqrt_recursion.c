#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - calculate the square root of a given number
 * @n: The number to be calculated
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int j = 1;

	if (n > 0 || n == 0)
		return (squrt(j, n, n));
	else
		return (-1);
}

/**
 * squrt - return square root of a number
 * @i: is a long integer variable
 * @n: is a long intger variable
 * @j: is a long integer variable
 *
 * Return: an integer
 */
int squrt(long i, long n, long j)
{
	if (n == j * j)
		return (j);
	else if (n > j * j && j * j != 0)
		return (-1);
	else
		return (squrt(i + 1, n, n / i));
}
