#include "main.h"
/**
 * argstostr - Concatenates all the argument of a program.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: NULL if ac == 0 or av == NULL.
 *         NULL if memory allocation fails.
 *         Else A pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	//variable declaration
	int i, j, len = 0, n = 0;
	char *argstostr;

	//check if ac = 0 or or sting is null.
	if (ac == 0 || av == NULL)
		return (NULL);

	//get the length of the 2d array 
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len += j;
		}
		/* Adding one to the length of the width because
		   we want a new line to end the string*/
		len++;
	}
	//Allocating memory of size char into len places
	argstostr = (char *) malloc(sizeof(char) * len);
	if (argstostr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			argstostr[n + j] = av[i][j];
		argstostr[n + j] = '\n';
		n += j + 1;
	}
	return (argstostr);
}
