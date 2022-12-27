#include <stdio.h>

void print_prime(long n);

/**
 * main - check code
 *
 * Return: 0
 */
int main(void)
{
	print_prime(1231952);
	print_prime(612852475143);
	return (0);
}

/**
 * print_prime - find and print prime factor
 * @n: variable
 */
void print_prime(long n)
{
	long i, j, k;

	j = 1;
	for (i = 2; i <= n; i++)
	{
		k = n / j;
		if (k % i == 0)
		{
			j = j * i;
			if (j == n)
			{
				printf("and %ld\n", i);
				break;
			}
			else
			{
				printf("%ld, ", i);
				i = 1;
			}
		}
	}
}
