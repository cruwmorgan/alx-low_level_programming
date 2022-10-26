#include <stdio.h>
#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers.
* @a: an integer pointer
* @n: number of array elements
* Return: void
*/

void reverse_array(int *a, int n)
{
	int m = 0, g;
	/* @while checks and loops*/
	while (m < n--)
	{
		g = a[m];
		a[m++] = a[n];
		a[n] = g;
	}
}
