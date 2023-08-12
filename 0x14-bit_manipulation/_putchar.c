#include <unistd.h>
/**
 * _putchar - This print character
 * @p:
 *
 */
int _putchar(char p)
{
	return (write(1, &p, 1));
}