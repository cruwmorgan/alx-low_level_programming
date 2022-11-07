#include <stdio.h>
#include "main.h"

/**
* *_memset - function that fills memory with a constant byte.
* @s: a character
* @b: a character
* @n: an unsigned integer
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *m = s;
	/* @while loops character downward*/
	while (n--)
	{
		*s = b;
		s++;
	}
	return (m);
}
