#include <stdio.h>
#include "main.h"

/**
* *_strncpy - function that copies a string.
* @dest: a pointer variable
* @src: a pointer variable
* @n: an integer
* Return: pointer dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int m, h = 0;
	char *t = dest, *g = src;
	/*@whlie loops src*/
	while (*src)
	{
		m++;
		src++;
	}
	m++;
	/* @if n > src length*/
	if (n > m)
		n = m;
	src = g;
	/* @for equates dest to src*/
	for (; h < n; h++)
		*dest++ = *src++;
	return (t);
}
