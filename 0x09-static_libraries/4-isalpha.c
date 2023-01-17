#include "main.h"

/**
 * _isalpha - print the english alphabet
 * @c:
 *
 * Return: 0 (fail) 1 (success)
 */
int  _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
