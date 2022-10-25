#include <stdio.h>
#include "main.h"

/**
* _strlen - function that returns the length of a string
* Return: string length is returned
* @s: a character
*/

int _strlen(char *s)
{
	int m = 0;
	/* @while checks for array and loops*/
	while (s[m] != '\0')
		m++;

	return (m);
}

/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @s: a character
* Return: void
*/

void print_rev(char *s)
{
	int len = _strlen(s);
	/* @for loops backword*/
	for (int m = len - 1; m >= 0; m--)
		putchar(s[m]);
	putchar('\n');
}
