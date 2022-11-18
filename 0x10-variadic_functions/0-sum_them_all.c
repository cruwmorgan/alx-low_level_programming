#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: an unsigned integer
* @...: other arguments
* Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list g;
	unsigned int m = 0;
	int sum = 0;
	/* @if checks for null value*/
	if (n == 0)
		return (0);
	va_start(g, n);
	/* @for loops through the arguments*/
	for (; m < n; m++)
		sum += va_arg(g, int);
	va_end(g);
	return (sum);
}
