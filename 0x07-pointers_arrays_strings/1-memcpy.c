#include <stdio.h>
#include "main.h"

/**
* *_memcpy - function that copies memory area
* @dest: a character
* @src: a character
* @n: an integer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *m = dest;
	/* @while loops n downwards*/
	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (m);
}
