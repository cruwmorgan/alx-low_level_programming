#include <stdio.h>

/**
* main - program that prints the first 50 Fibonacci numbers
* Return: 0 is returned
*/

int main(void)
{
	int m;
	long int n[50];

	n[0] = 1;
	n[1] = 2;
	printf("%ld, %ld, ", n[0], n[1]);
	/* @for loops from 2 to 49*/
	for (m = 2; m < 50; m++)
	{
		n[m] = n[m - 1] + n[m - 2];
		/* @if checks for m =49*/
		if (m == 49)
			printf("%ld\n", n[m]);
		else
			printf("%ld, ", n[m]);
	}
	return (0);
}
