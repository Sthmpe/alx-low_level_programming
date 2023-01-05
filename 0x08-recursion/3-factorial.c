#include "main.h"
/**
 * factorial - claculate the factorial of a given number
 * @n: The number to be calculated
 *
 * Return
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n-1));
	if (n == 0)
		return (1);
	else
		return (-1);
}
