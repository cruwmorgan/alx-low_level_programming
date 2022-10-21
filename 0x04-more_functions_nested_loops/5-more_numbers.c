#include <stdio.h>
#include "main.h"

/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14
* Return: 0 is returned
*/

void more_numbers(void)
{
	int m, n = 0;
	/* @for loops from 0 to 9*/
	for (; m < 10; m++)
	{
		/* @for loops from 0 to 14*/
		for (; n <= 14; n++)
		{
			/* @if checks n > 9*/
			if (n > 9)
				putchar(n / 10 + '0');
			putchar(n % 10 + '0');
		}
		putchar('\n');
	}
	putchar('\n');
}
