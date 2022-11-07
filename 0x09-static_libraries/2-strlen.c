#include "main.h"

/**
* _strlen - function that returns the length of a string
* Return: string length is returned
* @s: a character
*/

int _strlen(char *s)
{
	int m = 0;
	/* @while checks for array and loops*/
	while (s[m] != '\0')
		m++;
	return (m);
}
