#include <stdio.h>

/**
* _islower -  function that checks for lowercase character
* Return: 1 if c is lowercase
* Return: 0 if otherwise
*/

int _islower(int c)
{
	char m;
	int n = 0;
	/* @for loops from a -z*/
	for (m = 'a'; m <= 'z'; m++)
	{
		/* #if checks if c is a lowercase*/
		if (m == c)
			n = 1;
		else
			n = 0;
	}
	return n;
}
