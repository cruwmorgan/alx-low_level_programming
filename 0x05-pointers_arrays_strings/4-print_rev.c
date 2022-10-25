#include <stdio.h>
#include "main.h"

/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @s: a character
* Return: void
*/

void print_rev(char *s)
{
	char *m = s;
	/* @while pointer m*/
	while (*m)
		m++;
	m -= 1;

	/* @while prints reverse string*/
	while (m)
	{
		putchar(*s);
		m--;
	}
	putchar('\n');
}
