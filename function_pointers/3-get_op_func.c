#include "3-calc.h"

/**
 * get_op_func - Selects the correct arithmetic function.
 * @s: Operator passed as an argument.
 *
 * Return: Pointer to the matching function, or NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	if (s == NULL || s[0] == '\0' || s[1] != '\0')
		return (NULL);

	while (ops[i].op != NULL && ops[i].op[0] != s[0])
		i++;

	return (ops[i].f);
}
