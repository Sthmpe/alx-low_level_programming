#include "main.h"
/**
 * _putchar - Print out a character.
 * @c: The character to be printed out.
 *
 * Return: The value of the character.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
