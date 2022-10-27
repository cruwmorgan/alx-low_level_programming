#include "main.h"

/**
* *leet - function that encodes a string into 1337
* @z: a character pointer
* Return: string is returned
*/

char *leet(char *z)
{
	int m, n = 0;
	char p[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     pst[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	/* @while loops and checks string provided*/
	while (z[m])
	{
		/* @for checks for p arrayed list*/
		for (; n < 10; n++)
			/* @if checks for provided letters and encodes*/
			if (z[m]  == pst[n])
				z[m] = p[n];
		m++;
	}
	return (z);
}
