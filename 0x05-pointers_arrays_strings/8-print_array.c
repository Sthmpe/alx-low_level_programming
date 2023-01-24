#include <stdio.h>
#include "main.h"

/**
 * print_array - to print n element of a given array.
 * @a: The array.
 * @n: The numbers of element printed out.
 */
void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		if (len != n - 1)
			printf("%d, ", *(a + len));
		else
			printf("%d", *(a + len));
	}
	printf("\n");
}
