#include "main.h"
/**
 * _putchar - print character
 * @c: the character to be printed out.
 * Return: the character.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include <stdio.h>

/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
