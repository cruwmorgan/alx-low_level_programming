#include <stdio.h>
#include "main.h"

/**
* main - program that finds and prints the largest prime factor of the number
* 612852475143
* Return: 0 is returned
*/

int main(void)
{
	unsigned long int n = 3, m = 612852475143;
	/* @for loops from 3 */
	for (; n < 12057; n += 2)
	{
		/* @while values of m/n*/
		while (m % n == 0 && m != n)
			m /= n;
	}
	printf("%lu\n", m);
	return (0);
}
