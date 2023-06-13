#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print the multiplication of two integer reciveed as argument
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: always (0).
 */
int main(int argc, char *argv[])
{
	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
