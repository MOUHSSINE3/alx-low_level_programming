#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t m[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int n = 0;

	while (m[n].op != NULL && *(m[n].op) != *s)
		n++;

	return (m[n].f);
}

