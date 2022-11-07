#include <stdio.h>
#include "main.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal
* Return: 0 is returned
* @n: an input
*/

void print_diagonal(int n)
{
	/* @if checks if input is not 0*/
	if (n > 0)
	{
		int m = 0, g;
		/* @for loops from 0 to input n*/
		for (; m < n; m++)
		{
			/* @for loops g from 0 to m*/
			for (g = 0; g < m; g++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
