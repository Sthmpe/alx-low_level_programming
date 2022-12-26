#include "main.h"

/**
 * jack_bauer - digital clock
 * @hr:
 * @s:
 * @r:
 * @m:
 */

void jack_bauer(void)
{
	int hr, s, r, m;

	for (hr = '0'; hr <= '2'; hr++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (r = '0'; r <= '5'; r++)
			{
				for (s = '0'; s <= '9'; s++)
				{
					_putchar(hr);
					_putchar(m);
					_putchar(58);
					_putchar(r);
					_putchar(s);
					_putchar('\n');
				}
			}
			if (hr == '2' && m == '3')
				break;
		}
	}
}
