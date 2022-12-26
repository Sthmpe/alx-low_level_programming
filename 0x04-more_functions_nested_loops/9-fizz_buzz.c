#include <stdio.h>

/**
 * main - fizz buzz program
 * @i:
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz\t");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz\t");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\t");
		}
		else
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
	return (0);
}
