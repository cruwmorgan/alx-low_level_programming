#include "main.h"

/**
* swap_int - function that swaps the values of two integers
* @a: an integer
* @b: an integer
* Return: void
*/

void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
