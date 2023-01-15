#include "main.h"

/**
 * is_prime_number - indicate if the given number is a prime number
 * @n: the given number
 *
 * Return: an integer
*/
int is_prime_number(int n)
{
	return (prime(1, n));
}

/**
 * prime - verify if the given input is a prime number
 * @i: an unsinged integer variable
 * @n: the given input varaible
 *
 * Return: 1 (true) 0 (false)
*/
int prime(unsigned int i, unsigned int n)
{
	if (n % i == 0 && i == n && i != 1)
		return (1);
	else if (n <= 1)
		return (0);
	else if (n % i == 0 && i > 1 && i != n)
		return (0);
	else
		return (prime(i + 1, n));
}

