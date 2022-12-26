#include "main.h"
#include <unistd.h>
/**
 * print_times_table - multiplication table
 * @n:variable
 * @k:
 * @i:
 * @j:
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 || n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				write(1, &k, 4);
				if (i != n && j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n')
	}
}

