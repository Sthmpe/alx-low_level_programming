#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add positive numbers passed as argument.
 * @argc: Argument count.
 * @argv: Argument vector.
 * 
 * Return: always (0).
 */
int main(int argc, char *argv[])
{
	int i, l, j = 0;

	for (i = 1; i < argc; i++)
	{
		for (l = 0; argv[i][l] != '\0'; l++)
		{
			if (argv[i][l] < '0' || argv[i][l] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		j += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}