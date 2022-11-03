#include <stdio.h>
int ms_rec(int, int);

#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number
* @n: an integer
* Return: natural square root of a number
*/

int _sqrt_recursion(int n)
{
	/* @if checks input */
	if (n < 0)
		return (-1);
	return (ms_rec(1, n));
}

/**
* ms_rec - solve for square root
* @m: an integer
* @g: an integer
* Return: square root of input
*/

int ms_rec(int m, int g)
{
	/* @if checks for root of the input*/
	if (m * m != g)
		return (-1);
	return (ms_rec(m + 1, g));
}
