#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - function that selects the correct function to perform the
* operation asked by the user
* @s: a character
* Return: pointer to the function that corresponds to the operator given
* as a parameter
*/int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int m = 0;
	/*@while loops thrpugh m*/
	while (m < 5)
	{
		if (*(ops[m]).op == *s && *(s + 1) == '\0')
			return (ops[m].f);
		m++;
	}
	return (NULL);
}
