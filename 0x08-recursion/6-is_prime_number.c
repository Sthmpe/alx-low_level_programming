#include "main.h"

int is_prime_number(int n)
{
        return (prime(1, n));     
}

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