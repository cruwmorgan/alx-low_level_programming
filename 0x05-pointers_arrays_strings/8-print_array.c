#include <stdio.h>
#include "main.h"

/**
* print_array - function that prints n elements of an array
* of integers
* @a: an integer
* @n: number of elements of array
* Return: void
*/

void print_array(int *a, int n)
{
	int m = 0;
	/* @for loops and prints the array values*/
	for (; m < n; m++)
	{
		printf("%d", a[m]);
		/* @if checks empty value*/
		if (m < n - 1)
			printf(", ");
	}
	printf("\n");
}
