#include "main.h"

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
		n = squrt(j, n);
	else
		n = -1;
	return (n);
}

int squrt(int i, int n)
{
	int j = n / i;
	
	if (j * j == n)
		return (j);
	else
		squrt(i + 1, n);
	return (-1);
}