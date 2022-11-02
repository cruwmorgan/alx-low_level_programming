#include <stdio.h>
#include "main.h"

/**
* _puts_recursion - function that prints a string, followed by a new line
* @s: a character
* Return: void
*/

void _puts_recursion(char *s)
{
	/* @if loops through the string*/
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
