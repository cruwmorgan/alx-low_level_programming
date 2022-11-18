#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* @...: other arguments
* Return: 0 is returned
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list g;
	unsigned int m = 0;
	int j;

	va_start(g, n);
	/*@for loops through arguments*/
	for (; m < n; m++)
	{
		j = va_arg(g, int);
		printf("%d", j);
		/*@if checks for null separator*/
		if (separator == NULL)
			continue;
		if (m < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(g);
}
