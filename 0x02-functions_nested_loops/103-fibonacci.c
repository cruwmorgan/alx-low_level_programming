#include <stdio.h>

/**
* main - program that finds and prints the sum of the even-valued terms
* Return: 0 is returned
*/

int main(void)
{
	int m;
	long int n[50], g = 2;

	n[0] = 1;
	n[1] = 2;
	/* @for loops from 2 to 49*/
	for (m = 2; m < 50; m++)
	{
		n[m] = n[m - 1] + n[m - 2];
		/* @if checks if value<4000000*/
		if ((n[m] % 2) == 0 && n[m] < 4000000)
			g += n[m];
	}
	printf("%ld\n", g);
	return (0);
}
