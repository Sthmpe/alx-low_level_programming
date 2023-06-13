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
	int coins[5] = {25, 10, 5, 2, 1};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (n > coins[i])
		{
			rem = n % coins[i];
			if (!tmp && rem == 0)
			{
				return (n / coins[i]);
			}
			else
			{
				cent = n / coins[i];
				tmp += cent;
				return (coin(rem, tmp));
			}
		}
		else if (n == 1 && coins[i] == 1)
		{
			rem = n % coins[i];
			if (!tmp && rem == 0)
			{
				return (n / coins[i]);
			}
			else
			{
				cent = n / coins[i];
				tmp += cent;
				return (coin(rem, tmp));
			}
		}
	}

	return (tmp);
}

