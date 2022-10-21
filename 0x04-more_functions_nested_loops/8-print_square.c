#include <stdio.h>
#include "main.h"

/**
* print_square -  function that prints a square
* Return: 0 is returned
* @size: inputted size of square
*/

void print_square(int size)
{
	/* @if checks size value*/
	if (size > 0)
	{
		int m, n;
		/* @for loops from 0 to inputted size*/
		for (m = 0; m < size; m++)
		{
			/* @for loops from 0 to inputted size*/
			for (n = 0; n < size; n++)
				putchar('#');
			putchar('\n');
		}
	}
	putchar('\n');
}
