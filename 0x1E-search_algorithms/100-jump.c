#include "search_algos.h"
#include <math.h>

/**
* jump_search - function that searches for a value in a sorted array of
* integers using the Jump search algorithm
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, step = sqrt(size);
	/*@if checks for null or empty array*/
	if (!array || size <= 0)
		return (-1);
	while (b < size && array[b] < value)
	{
		a = b;
		b += step;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (a < b)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}
