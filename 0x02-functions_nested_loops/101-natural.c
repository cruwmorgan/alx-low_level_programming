#include <stdio.h>

/**
* main -  prints the sum of all the multiples of 3 or 5 below 1024
* Return: 0 is returned
*/

int main(void)
{
	int m, n = 0;
	/* @for loops from 0 to 1023*/
	for (m = 0; m < 1024; m++)
	{
		/* @if checks for multiples of 3 and 5*/
		if ((m % 5) == 0 || (m % 3) == 0)
			n += m;
	}
	printf("%d\n", n);
	return (0);
}
