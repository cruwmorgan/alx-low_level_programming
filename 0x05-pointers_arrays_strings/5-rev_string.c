#include <stdio.h>
#include "main.h"

/**
* _rev_string - function that reverses a string.
* @s: a character
* Return: void
*/

void rev_string(char *s)
{
	int len = 0;
	/* @while checks for null*/
	while (s[len] != '\0')
		len++;
	/* @for loops backword*/
	for (len = len - 1; len >= 0; len--)
		putchar(s[len]);
}
