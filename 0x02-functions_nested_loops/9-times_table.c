#include <stdio.h>

/**
* times_table -function that prints the 9 times table, starting with 0
* Return: 0 is returned
*/

void times_table(void)
{
	int m, n, g;
	/* @for loops from 0 to 9*/
	for (m = 0; m <= 9; m++)
	{
		/* @for loops from 0 to 9*/
		for (n = 0; n <= 9; n++)
		{
			g = m * n;
			/* @if checks g/10 is = 0*/
			if ((g / 10) == 0)
			{
				/* @if checks n is not 0*/
				if (n != 0)
					putchar(' ');
				putchar(g + '0');
				/* @if checks j=9*/
				if (n == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar((g / 10) + '0');
				putchar((g % 10) + '0');
				/* @if checks n=9*/
				if (n == 9)
					continue;
				putchar(',');
				putchar(' ');
			}

		}
		putchar('\n');
	}
}
