#include <stdio.h>

/**
* _isalpha - function that checks for alphabetic character
* @c: an input
* Return: 1 is returned if c is an letter
*/

int _isalpha(int c)
{
	char m, n;
	int g = 0;
	/* @for loops from a to z*/
	for (m = 'a'; m <= 'z'; m++)
	{
		/* @for loops from A to Z*/
		for (n = 'A'; n <= 'Z'; n++)
		{
			/* @if checks if c is a letter*/
			if (m == c || n == c)
				g = 1;
		}
	}
	return (g);
}
