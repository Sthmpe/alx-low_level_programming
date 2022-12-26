#include "main.h"

/**
 * print_alphabet - print the english alphabet
 * @ch:
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
