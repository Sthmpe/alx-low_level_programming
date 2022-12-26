#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	char Ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (Ch = 'A'; Ch <= 'Z'; Ch++)
	{
		putchar(Ch);
	}
	putchar('\n');
	return (0);
}
