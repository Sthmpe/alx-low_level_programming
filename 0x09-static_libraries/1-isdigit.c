#include "main.h"

/**
 * _isdigit - check digit
 * @c: integer
 *
 * Return: 1 (paas), 0 (fail)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
