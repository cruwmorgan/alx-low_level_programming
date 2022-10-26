#include <stdio.h>
#include "main.h"

/**
* puts_half -  function that prints half of a string
* @str: a character
* Return: void
*/

void puts_half(char *str)
{
	int m = 0, n, g, k;
	/* @while checks null*/
	while (str[m] != '\0')
		m++;
	/* @if divides length by 2 */
	if (m % 2 == 0)
		n = m / 2;
	else
		n = (m - 1) / 2;
	/* @for loops and print the result*/
	for (g = n + 1, k = 0; g <= m; g++, k++)
		putchar(str[g]);
	putchar('\n');
}
