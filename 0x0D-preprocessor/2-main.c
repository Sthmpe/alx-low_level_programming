#include <stdio.h>
/**
 * main - print the name of the file compiled.
 * Rturn: 0.
 */
int main(void)
{
        printf("%s\n", __BASE_FILE__);
        return (0);
}