#include <stdio.h>
#include "main.h"

/**
* _print_rev_recursion -  function that prints a string in reverse
* @s: a character
* Return: void
*/

void _print_rev_recursion(char *s)
{
	/* @if loops tgrough the string*/
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
