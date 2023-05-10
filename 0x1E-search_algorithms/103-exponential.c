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

/**
* exponential_search - function that searches for a value in a sorted array of
* integers using the Exponential search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: the value to search for
* Return: the first index where value is located
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, newsize = 0;
	int ret;
	/*@if checks for null array*/
	if (!array || size <= 0)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	newsize = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	ret = binary_search(array + i, newsize, value);
	return (ret == -1 ? ret : ret + (int)i);
}
