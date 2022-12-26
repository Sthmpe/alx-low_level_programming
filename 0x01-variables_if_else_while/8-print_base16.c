#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch == '9')
		{
			for (ch = 'a'; ch <= 'f'; ch++)
			{
				putchar(ch);
			}
		}
	}
	putchar('\n');
	return (0);
}
