#include "main.h"

/**
 * print_triangle - draw triangle
 * @size: variable
 */
void print_triangle(int size)
{
	int i, j, n;
	int k = size;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			k--;
			for (j = size; j >= 1; j--)
			{
				n = size - j;
				if (n >= k)
				{
					_putchar(35);
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
