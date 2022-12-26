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

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch > '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
