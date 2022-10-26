#include "main.h"

/**
* *_strcpy - function that copies the string pointed to by src, including the
* terminating null byte (\0), to the buffer pointed to by dest
* @dest: a pointer
* @src: a pointer
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int m = 0, n;
	/* @while checks for length*/
	while (src[m] != '\0')
		m++;
	/* @for equates dest to src*/
	for (n = 0; n <= m; n++)
		dest[n] = src[n];
	return (dest);
}
