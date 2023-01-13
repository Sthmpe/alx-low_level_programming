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
		return (squrt(j, n, 1));
	else
		return (-1);
}

int squrt(int i, int n, int j)
{	
	if (n == j * j)
		return (j);
	else if (j * j != n)
	{

	}
	else
	{
		return (squrt(i + 1, n, n / i));	
	}
	
}