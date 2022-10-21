#include "main.h"

/**
* _isupper - function that checks for uppercase character
* Return: 1 if input is uppercase and 0 if input is lowercase
* @c: an input
*/

int _isupper(int c)
{
	char m = "A";
	int n = 0;
	/* @for loops to Z*/
	for (; m <= "Z"; m++)
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
