#include "main.h"

/**
 * puts_half -print half of the a given string.
 * @str: The given string.
 */
void puts_half(char *str)
{
        int len = _strlen(str) - 1;

        if (len % 2 == 0)
                len = len / 2;
        else
                len = (len - 1) / 2;
        do {
                if (str[len] != 0)
                        _putchar(str[len]);
                else
                        break;
        } while (len++);
        _putchar('\n');
}
