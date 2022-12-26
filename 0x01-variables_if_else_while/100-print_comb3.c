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
	int m = '1';

	for (ch = '0'; ch <= '8'; ch++)
	{
		for (hc = m; hc <= '9'; hc++)
		{
			putchar(ch);
			putchar(hc);
			if (ch < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
		m++;
	}
	putchar('\n');
	return (0);
}
