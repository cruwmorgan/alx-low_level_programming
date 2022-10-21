#include "main.h"

/**
* _isdigit -  function that checks for a digit (0 through 9)
* Return: 1 if input is a digt and 0 if its not a digit
* @c: an input
*/

int _isdigit(int c)
{
	char n = '0';
	int m = 0;
	/* @for loops to 9*/
	for (; n <= '9'; n++)
	{
		/* @if checks if input is a digit*/
		if (c == n)
		{
			m = 1;
			break;
		}
	}

	return (m);
}
