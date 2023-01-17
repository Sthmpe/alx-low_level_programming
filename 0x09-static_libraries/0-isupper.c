#include "main.h"

/**
 * _isupper - check upper case
 * @c: integer
 *
 * Return: 1 (paas), 0 (fail)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
