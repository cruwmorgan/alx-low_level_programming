#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - function that searches for an integer.
* @array: a pointer to an array
* @size: number of elements in the array array
* @cmp: pointer to the function to be used to compare values
* Return: index of the first element for which the cmp function does not
* return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int m = 0;
	/* @if checks for null */
	if (cmp == NULL || array == NULL)
		return (-1);
	/* @if checks for size*/
	if (size <= 0)
		return (-1);
	/* @for loops through size*/
	for (; m < size; m++)
		if (cmp(array[m]))
			return (m);
	if (m == size)
		return (-1);
	return (-1);
}
