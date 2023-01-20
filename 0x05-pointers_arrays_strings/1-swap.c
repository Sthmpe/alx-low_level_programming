#include "main.h"

/**
 * swap_int - swap values between two variable.
 * @a: the first variable.
 * @b: the second variable.
 */
void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
}

