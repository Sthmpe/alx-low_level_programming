#include <stdio.h>
/**
 * main - Print number of argument passed.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
