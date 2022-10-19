#include <stdio.h>

/**
* print_to_98 - ction that prints all natural numbers from n to 98
* @n: an input
* Return: non
*/

void print_to_98(int n)
{
	/* @if checks if n <= 98*/
	if (n <= 98)
	{
		/* @for loops to 97*/
		for (; n <= 98; n++)
		{
			printf("%d", n);
			/* @if checks n = 98*/
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		/* @for loops to 97*/
		for (; n >= 98; n--)
		{
			printf("%d", n);
			/* @if checks n = 98*/
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
