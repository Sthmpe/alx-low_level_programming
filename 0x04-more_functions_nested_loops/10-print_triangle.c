#include "main.h"

/**
 * print_triangle - draw triangle
 * @size: variable
 */
void print_triangle(int size)
{
	int i, j, m, n;
	int l = 0;
	int k = size;

	for (i = 1; i <= size; i++)
	{
		k--;
		for (j = 1; j <= size; j++)
		{
			n = j - i;
			if (k == n)
			{
				l++;
				for (m = 1; m <= l; m++)
				{
					_putchar(35);
				}
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
