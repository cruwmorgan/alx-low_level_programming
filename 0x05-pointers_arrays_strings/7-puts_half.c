#include <stdio.h>
#include "main.h"

/**
* puts_half -  function that prints half of a string
* @str: a character
* Return: void
*/

void puts_half(char *str)
{
	int m, n = 0;
	/* @while checks null*/
	while (str[m] != '\0')
		m++;
	n = (m + 1) / 2;
	/* @for loops and print the result*/
	for (m = n; str[m]; m++)
		putchar(str[m]);
	putchar('\n');
}
