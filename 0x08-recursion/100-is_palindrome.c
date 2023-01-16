#include "main.h"

/**
 * is_palindrome - check if sting is palindrome.
 * @s: given string.
 *
 * Return: 1 if palindrome.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - determine the lenght of a string
 * @s: the string to be measured.
 * @len: the lenght of the string.
 *
 * Return: the length of string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - check if the string is a palindonrome.
 * @s: the string to verify.
 * @index: the index of the string.
 * @len: the lenth of the string.
 *
 * Return: 1 if the string is palindrome, 0 if the string is not palindrome.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
