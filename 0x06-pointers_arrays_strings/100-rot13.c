#include "main.h"
/**
 * rot13 - Encode a string by rotating by 13 places
 * @s: The string to encode.
 *
 * Return: The encoded the string.
 */
char *rot13(char *s)
{
	int len = 0, index;
	char rot[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rev[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; s[len]; len++)
	{
		for (index = 0; index <= 51; index++)
		{
			if (s[len] == rot[index])
			{
				s[len] = rev[index];
				break;
			}
		}

	}

	return (s);
}
