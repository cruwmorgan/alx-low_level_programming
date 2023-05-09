#include "search_algos.h"

/**
* binary_search - function that searches for a value in a sorted array of
* integers using the Binary search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, m = 0, n = 0, p = size - 1;
	/*@if value is not present in array or if array is NULL, return -1*/
	if (!array || size <= 0)
		return (-1);
	while (n <= p)
	{
		printf("Searching in array: ");
		for (i = n; i <= p; i++)
		{
			if (i < p)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		m = (n + p) / 2;
		if (array[m] < value)
			n = m + 1;
		else if (array[m] > value)
			p = m - 1;
		else
			return (m);
	}
	return (-1);
}
