#include <stdio.h>
#include "main.h"

/**
* *_strcat - function that concatenates two strings.
* @dest: a pointer
* @src: a pointer
* Return: pointer dest
*/

char *_strcat(char *dest, char *src)
{
	char *m = dest;
	/* @while loops dest*/

	while (*dest)
		dest++;
	/* @while loops src */
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (m);
}
