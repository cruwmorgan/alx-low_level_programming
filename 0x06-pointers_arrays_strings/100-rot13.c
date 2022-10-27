#include <stdio.h>
#include "main.h"

/**
* *rot13 - function that encodes a string using rot13.
* @z: a character pointer
* Return: encoded string
*/

char *rot13(char *z)
{
	int m = 0;
	/* @while loops through the string */
	while (z[m] != '\0')
	{
		/* @while loops from aA to zZ*/
		while ((z[m] >= 'a' && z[m] <= 'z') ||
				(z[m] >= 'A' && z[m] <= 'Z'))
		{
			if ((z[m] >= 'a' && z[m] <= 'm') ||
					(z[m] >= 'A' && z[m] <= 'M'))
				z[m] += 13;
			else
				z[m] -= 13;
			m++;
		}
		m++;
	}
	return (z);
}
