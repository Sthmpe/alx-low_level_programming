#include <stdlib.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: The number to get it required index bit.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = count_bit(n);
	int *binary = malloc(sizeof(int) * i);
	int bit_value = 0;
	unsigned long int tmp = n;
	unsigned long int r = 0;
	unsigned int j = i;

	if (binary == NULL)
		return (-1);
	if (n == 0)
	{
		binary[i - 1] = 0;
		binary[i] = '\0';
	}
	else
	{
		while (tmp != 0)
		{
			tmp = n >> 1;
			r = n - (tmp * 2);
			binary[i - j] = r;
			n = tmp;
			j--;
		}
		binary[i] = '\0';
	}
	
	if (index >= i)
		bit_value = -1;
	else
		bit_value = binary[i - index - 1];
	free(binary);
	return (bit_value);
}

/**
 * count_bit - To count the bit digit.
 * @n: The number to get its bit count.
 * Return: the count.
*/
unsigned int count_bit(unsigned long int n)
{
	int i = 0;

	while (n != 0)
	{
		n = n >> 1;
		i++;
	}
	return (i);
}

