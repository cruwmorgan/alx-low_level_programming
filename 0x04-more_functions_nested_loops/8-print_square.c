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
		int m, n = 0;
		/* @for loops from 0 to inputted size*/
		for (; m < size; m++)
		{
			/* @for loops from 0 to inputted size*/
			for (; n < size; n++)
				putchar('#');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
