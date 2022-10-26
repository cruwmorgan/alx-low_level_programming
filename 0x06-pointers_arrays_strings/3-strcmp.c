#include <stdio.h>
#include "main.h"

/**
* _strcmp - function that compares two strings.
* @s1: a ponter character
* @s2: a pointer character
* Return: the difference
*/

int _strcmp(char *s1, char *s2)
{
	/* @while checks if they are given*/
	while (*s1 && *s2)
	{
		/* @if compares both */
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
