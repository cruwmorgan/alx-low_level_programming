#include <stdio.h>
#include "main.h"

/**
* puts2 -  function that prints every other character of a string,
* starting with the first
* @str: a character
* Return: void
*/

void puts2(char *str)
{
	int m = 0;
	/* @for */
	for (; str[m] != '\0'; m++)
	{
		/* @if checks for integer*/
		if (m % 2 == 0)
			putchar(str[m]);
	}
	putchar('\n');
}
