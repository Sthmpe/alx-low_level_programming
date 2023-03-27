#include "variadic_functions.h"
/**
 * sum_them_all - Return the sum of all its parameters.
 * @n: The given parameters.
 * Return: The parameter sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum = 0;
	unsigned int i = 0;

	va_start(list, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
