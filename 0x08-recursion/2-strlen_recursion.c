#include <stdio.h>
#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string.
* @s: a character
* Return: Length of string
*/

int _strlen_recursion(char *s)
{
	/* @if loops through string*/
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
