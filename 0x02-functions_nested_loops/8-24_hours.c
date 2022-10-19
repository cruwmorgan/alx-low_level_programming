#include <stdio.h>

/**
* jack_bauer - function that prints every minute of the day of Jack Baur
* Return: non
*/

void jack_bauer(void)
{
	int m, g;
	/* @for loops m from 0 to 23*/
	for (m = 0; m < 24; m++)
	{
		/* @for loops g from 0 to 59*/
		for (g = 0; g < 60; g++)
		{
			putchar((H / 10) + '0');
			putchar((H % 10) + '0');
			putchar(':');
			putchar((M / 10) + '0');
			putchar((M % 10) + '0');
			putchar('\n');
		}
	}
}
