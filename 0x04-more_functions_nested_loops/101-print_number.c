#include <stdio.h>
#include "main.h"

/**
* print_number - function that prints an integer
* Return: 0 is returned
* @n: an input
*/

void print_number(int n)
{
	int m = 1000000000;
	/* @for loops from 0*/
	for (; m >= 0; m /= 10)
	{
		/* @if checks for 0*/
		if (n / m != 0)
			putchar((n / m) % 10 + '0');
		else
			putchar('0');
	}
}
