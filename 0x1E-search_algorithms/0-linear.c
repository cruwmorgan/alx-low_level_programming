#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of integers
* using the Linear search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;
	/*@if value is not present in array or if array is NULL,return -1*/
	if (!array || size <= 0)
		return (-1);
	/*@for interates through array values*/
	for (a; a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a];
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
