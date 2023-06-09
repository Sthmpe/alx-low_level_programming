#include "main.h"
#include <stdio.h>
/**
 * strtow - A function that splits a string into words.
 * @str: The sring to be splited.
 *
 * Return: NULL if str == NULL or str == ""
 *              if fail to allocate memory.
 *         A pointer to an array of srings(words).
 */
char **strtow(char *str)
{
	char **strtow;
	int i, j, len = 0, word = How_many_word(srt);

	if (word == 0)
		return (NULL);
	strtow = malloc(sizeof(char*) * (word + 1));
	if (strtow != NULL)
	{

	}
}
/**
 * Len_of_word - Count length of a give word in a string.
 * @index: The index of the first letter of thhe word in the string.
 * @str: The string.
 *
 * Return: the length of the word. 
*/
int Len_of_word(int index, char *str)
{
	int i, len = 0;
	if (str != NULL)
	{
		for (i = index; str[i]; i++)
		{
			if (str)
		}
	}
}
/**
 * How_many_word - Count how many words that are in the string.
 * @str: The string to count.
 *
 * Return: The Number of words.
 */
int How_many_word(char *str)
{
	int Number_of_word = 0, i, j;

	if (str == NULL)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j]; j++)
			{
				if (str[j] == ' ' && str[j - 1] != ' ')
				{
					Number_of_word++;
					i = j;
					printf("j %d \n", j);
					break;
				}
				else if (str[j] != ' ' && str[j + 1] == '\0')
				{
					Number_of_word++;
					i = j;
					printf("j %d \n", j);
					break;
				}
			}
		}
	}
	return (Number_of_word);
}
/**
 * length - Count the length of a string.
 * @str: The given string.
 *
 * Return: The length of the string.
 */
int length(char *str)
{
	int length = 0
	if (str != NULL)
	{
		while (str[length])
			length++;
	}
	return (length);
}