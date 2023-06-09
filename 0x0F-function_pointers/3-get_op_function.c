#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Select the correct function to perform the operation
 *		     asked by the user.
 * @s: The operator passed as argument to the program.
 * Return: A pointer to the function that correspond to the operator given.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
