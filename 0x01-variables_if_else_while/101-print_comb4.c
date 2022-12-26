#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;
	int hc;
	int hr;
	int n = '1';
	int z = '2';
	int m = '1';

	for (ch = '0'; ch <= '8'; ch++)
	{
		for (hc = m; hc <= '8'; hc++)
		{
			n++;
			for (hr = n; hr <= '9'; hr++)
			{
				putchar(ch);
				putchar(hc);
				putchar(hr);
				if (ch < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			if (n == '9')
			{
				n = z;
			}
		}
		z++;
		m++;
	}
	putchar('\n');
	return (0);
}
