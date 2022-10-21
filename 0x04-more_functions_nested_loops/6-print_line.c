#include <stdio.h>
#include "main.h"

/**
* print_line -  function that draws a straight line in the terminal
* Return: 0 is returned
* @n: an input
*/

void print_line(int n)
{
	/* @if checks if input is not 0*/
	if (n > 0)
	{
		int m = 0;
		/* @for loops from 0 to input n*/
		for (; m < n; m++)
			putchar('_');
	}
	putchar('\n');
}
