#include <stdio.h>

/**
* print_sign - function that prints the sign of a number.
* Return: 1 if n>0, 0 if n==0, -1 if n<0
* @n: an input
*/

int print_sign(int n)
{
	int v = 0;
	/* @if checks if n > 0*/
	if (n > 0)
	{
		putchar('+');
		v = 1;
	}
	else if (n == 0)
	{
		putchar('0');
		v = 0;
	}
	else
	{
		putchar('-');
		v = -1;
	}
	return (v);
}
