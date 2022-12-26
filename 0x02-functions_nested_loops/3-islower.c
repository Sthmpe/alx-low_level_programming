#include "main.h"

/**
 * _islower - print the english alphabet
 * @c:
 *
 * Return: 0 (fail) 1 (success)
 */
int  _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
