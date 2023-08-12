#include "main.h"
#include <stdio.h>

/**
 * print_binary -  a function that prints the binary representation of a number
 * @n: The number to convert to binary.
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		convert_to_binary(n);
}
/**
 * convert_to_binary - To perform conversion.
 * @n: the numbers to divide.
*/
void convert_to_binary(unsigned long int n)
{
	unsigned long int tmp = 0;
	unsigned long int r = 0;

	tmp = n >> 1;
	r = n - (tmp * 2);
	if (n == 0)
	{
		return;
	}
	convert_to_binary(tmp);
	_putchar(r + '0');
}
