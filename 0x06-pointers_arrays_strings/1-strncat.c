#include <stdio.h>
#include "main.h"

/**
* *_strncat - function that concatenates two strings.
* @dest: a pointer variable
* @src: a pointer variable
* @n: an integer
* Return: pointer dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int m, h = 0;
	char *t = dest, *g = src;
	/*@whlie loops src*/
	while (*src)
	{
		m++;
		src++;
	}
	/* @while loops dest*/
	while (*dest)
		dest++;
	/* @if n > src length*/
	if (n > m)
		n = m;
	src = g;
	/* @for equates dest to src*/
	for (; h < n; h++)
		*dest++ = *src++;
	*dest = '\0';
	return (t);
}
