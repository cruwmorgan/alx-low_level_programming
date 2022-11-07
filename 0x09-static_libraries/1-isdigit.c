#include <stdio.h>
#include "main.h"

/**
* _isdigit -  function that checks for a digit
* Return: 1 if input is a digit and 0 if input is not
* @c: an input
*/

int _isdigit(int c)
{
	char m = '0';
	int n = 0;
	/* @for loops to Z*/
	for (; m <= '9'; m++)
	{
		/* @if checks if input is an uppercase*/
		if (c == m)
		{
			n = 1;
			break;
		}
	}

	return (n);
}
