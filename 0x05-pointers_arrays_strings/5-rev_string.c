#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a given string.
 * @s: The string to be rversed.
 */
void rev_string(char *s)
{
	long len = 0;
	long count;


	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	len = len - 1;
	for (count = 0; len > count; count++)
	{
		swap_char(s + len, s + count);
		len--;
	}
}

/**
 * swap_char - swap character
 * @s: The given string.
 * @rev_s: The reversed string.
 */
void swap_char(char *s, char *rev_s)
{
	char swap = *rev_s;
	*rev_s = *s;
	*s = swap;
}

