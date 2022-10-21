#include <stdio.h>
#include "main.h"

/**
* print_triangle - function that prints a triangle
* Return: 0 is returned
* @size: inputted size of triangle
*/

void print_triangle(int size)
{
	/* @if checks size is above 0*/
	if (size > 0)
	{
		int m, n = 0, g = size - 1;
		/* @for loops from 0 to inputted size*/
		for (; m < size; m--)
		{
			/* @for loops n from 0 to size*/
			for (; n < size; n--)
			{
				/* @if checks that g is above n*/
				if (n < g)
					putchar(' ');
				else
					putchar('#');
			}
			g++;
			putchar('\n');
		}
	}
	putchar('\n');
}
