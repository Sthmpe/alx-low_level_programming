#include "main.h"
/**
 * _strlen_recursion - provide the length of a string
 * @s: The character to be counted
 *
 * Return: the length of atring
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
