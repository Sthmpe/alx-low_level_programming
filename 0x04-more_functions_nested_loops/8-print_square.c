#include "main.h"

/**
 * print_square - print square
 * @n: integer
 * @i:
 * @j:
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('#');
			for (j = 1; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
