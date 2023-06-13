#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that prints the minimum number of coins to make change
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: An integer value.
 */
int main(int argc, char *argv[])
{
	int n = 0;
	int cent = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		if (n < 0)
		{
			printf("0\n");
		}
		else
		{
			cent = coin(n, 0);
			printf("%d\n", cent);
		}
	}
	return (0);
}
/**
 * coin - To calculate the minimum number of coin
 * @n: The amount
 * @tmp: A temp cent
 *
 * Return: The number or coin.
 */
int coin(int n, int tmp)
{
	int rem = 0;
	int cent = 0;

	if (n > 25)
	{
		rem = n % 25;
		if (!tmp && rem == 0)
		{
			return (n / 25);
		}
		else
		{
			cent = n / 25;
			tmp += cent;
			return (coin(rem, tmp));
		}
	}
	else if (n > 10)
	{
		rem = n % 10;
		if (!tmp && rem == 0)
		{
			return (n / 10);
		}
		else
		{
			cent = n / 10;
			tmp += cent;
			return (coin(rem, tmp));
		}
	}
	else if (n > 5)
	{
		rem = n % 5;
		if (!tmp && rem == 0)
		{
			return (n / 5);
		}
		else
		{
			cent = n / 5;
			tmp += cent;
			return (coin(rem, tmp));
		}
	}
	else if (n > 2)
	{
		rem = n % 2;
		if (!tmp && rem == 0)
		{
			return (n / 2);
		}
		else
		{
			cent = n / 2;
			tmp += cent;
			return (coin(rem, tmp));
		}
	}
	else if (n > 1 || n > 0)
	{
		rem = n % 1;
		if (!tmp && rem == 0)
		{
			return (n / 1);
		}
		else
		{
			cent = n / 1;
			tmp += cent;
			return (coin(rem, tmp));
		}
	}

	return (tmp);
}

