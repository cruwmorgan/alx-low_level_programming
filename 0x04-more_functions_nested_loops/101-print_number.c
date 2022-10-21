#include "main.h"
void get_m(int g);

/**
* print_number -  function that prints an integer.
* @n: an input
* Return: non
*/

void print_number(int n)
{
	/* @if checks integers and print it*/
	if (n == 0)
		putchar('0');
	else if (n < 0)
	{
		putchar('-');
		get_m(n * -1);
	}
	else
		get_m(n);
}

/**
* get_m - gets the integer
* Return: 0 is returned
* @g: an input
*/

void get_m(int g)
{
	int m = 1000000000;
	/* @for loops from 1*/
	for (; m >= 1; m /= 10)
	{
		/* @if checks for 0*/
		if (g / m != 0)
			putchar((g / m) % 10 + '0');
	}
}
