#include "main.h"

/**
 * _abs - make all absolute
 * @n:
 *
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		return (n);
	}
	else
		return (n);
}
