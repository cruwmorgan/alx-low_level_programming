#include <stdio.h>
#include "main.h"

/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @s: a character
* Return: void
*/

void print_rev(char *s)
{
	int len = 0;
	/* @while checks for null*/
	while (s[len] != '\0')
		len++;
	/* @for loops backword*/
	for (len = len - 1; len >= 0; len--)
		putchar(s[len]);
	putchar('\n');
}
