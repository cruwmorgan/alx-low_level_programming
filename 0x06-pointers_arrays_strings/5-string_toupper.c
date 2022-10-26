#include <stdio.h>
#include "main.h"

/**
* *string_toupper - function that changes all lowercase letters of a
* string to uppercase.
* @m: a character
* Return: pointer to m
*/

char *string_toupper(char *m)
{
	char *g = m;
	/* @while loops when m is given*/
	while (*m)
	{
		/* @if loops from a to z*/
		if (*m >= 'a' && *m <= 'z')
			*m -= 32;
		m++;
	}
	return (g);
}
