#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        long int res;

        res = infinite_add(n, m);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %ld\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %ld\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %ld\n", n, m, res);
        }
        res = infinite_add(n, m);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %ld\n", n, m, res);
        }
        return (0);
}