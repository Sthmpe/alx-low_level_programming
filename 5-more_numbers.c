#include "main.h"

/**
 * more_numbers - print numbers x10
 * @n:
 * @i:
 * @k:
 * @j:
 */
void more_numbers(void)
{
	int n, i, j, k;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
			i++;
			if (i == 10)
			{
				i = '1';
				for (k = '0'; k <= '4'; k++)
				{
					write(1, &i, 1);
					_putchar(k);
				}
			}
		}
		_putchar('\n');
	}
}
