#include <stdio.h>
#include "main.h"

/**
* _atoi - function that convert a string to an integer
* @s: a pointer
* Return: the integer
*/

int _atoi(char *s)
{
	int m = 0;
	unsigned int n = 0;
	char g = 0;
	/* @while checks for input*/
	while (*s)
	{
		if (*s == '-')
			m *= -1;
		if (*s >= '0' && *s <= '9')
		{
			g = 1;
			n = n * 10 + *s - '0';
		}
		else if (g)
			break;
		s++;
	}
	/* @if negates n */
	if (m < 0)
		n = (-n);
	return (n);
}
