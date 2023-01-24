#include "main.h"

/**
 * puts2 - print the string even index characters.
 * @str: the required string to print out.
 */
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
	}
	_putchar('\n');
}
