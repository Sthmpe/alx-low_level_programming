#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the two diagonals of
 * a square matrix of integer.
 * @a: tne matrix.
 * @size: the size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int diagonal1 = 0, diagonal2 = 0, i, n = size * size;

	for (i = 0; i <= n; i++)
	{
		if (i != 0)
		{
			if (0 == (i % size))
				diagonal2 += a[i - (i / size)];
			if (0 == (i % size) && i < n)
				diagonal1 += a[i + (i / size)];
		}
		else
			diagonal1 += a[i];
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
