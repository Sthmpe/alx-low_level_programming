#include "main.h"
#include <stdio.h>
/**
* infinite_add - C function that adds two numbers stored
*in strings to a buffer.
*Assumes that strings are never empty and
*that numbers will always be positive, or 0.
*Assumes there are only digits stored in the number strings.
*If result can be stored in the buffer,
*returns a pointer to the result.
*If result cannot be stored in the buffer, returns `0`.
*@n1:first number to be added
*@n2:second number to be added
*@r: store result
*@size_r: size of buffer
*Return:returns pointer to result
*/

long int infinite_add(char *n1, char *n2)
{
	return (add_string(n1,n2));
}

/**
 * add_string - Add string containing only real numbers.
 * @n1: The first string to be added.
 * @n2: The second string to be added.
 *
 * Return: The sum in real numbers.
 */
long int add_string(char *n1, char *n2)
 {
	long int real = string_to_integer(n1) + string_to_integer(n2);

	return (real);
 }
/**
 * string_to_integer - Convert a string containing only real numbers to real numbers
 * @n: The string containing the number.
 *
 * Return: The real number.
 */
long int string_to_integer(char *n)
{
	long int len = _strlen(n) - 1;
	long int real = 0, i, j, k;

	for (i = 0; n[i]; i++)
	{
		if (n[i] == 48)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (0 * k);
			k = 1;
		}
		else if (n[i] == 49)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (1 * k);
			k = 1;
		}
		else if (n[i] == 50)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (2 * k);
			k = 1;
		}
		else if (n[i] == 51)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (3 * k);
			k = 1;
		}
		else if (n[i] == 52)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (4 * k);
			k = 1;
		}
		else if (n[i] == 53)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (5 * k);
			k = 1;
		}
		else if (n[i] == 54)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (6 * k);
			k = 1;
		}
		else if (n[i] == 55)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (7 * k);
			k = 1;
		}
		else if (n[i] == 56)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (8 * k);
			k = 1;
		}
		else if (n[i] == 57)
		{
			if (len - i == 0)
				k = 1;
			for (j = 1; j <= len - i; j++)
			{
				k = k * 10;
			}
			real = real + (9 * k);
			k = 1;
		}
	}
	return (real);
}
/**
 * _strlen - measure the length of string
 * @s: the string to be measured.
 *
 * Return: the lenght of string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	do {
		if (*s == '\0')
			break;

		len++;
	} while (s[len]);

	return (len);
}
