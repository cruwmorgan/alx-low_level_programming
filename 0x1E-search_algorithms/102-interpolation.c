#include "search_algos.h"

/**
* interpolation_search - function that searches for a value in a sorted
* array of integers using the Interpolation search algorithm
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the first index where value is located
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t a = 0, b = size - 1, m = 0;
	size_t pos = a + (((double)(b - a) / (array[b] - array[a])) *
			(value - array[a]));
	/*@if checks if array is null or empty*/
	if (!array || size <= 0)
		return (-1);

	while (array[a] != array[b])
	{
		m = pos;
		if (m > size)
		{
			printf("Value checked array[%lu] is out of range\n",
					m);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);

		if (array[m] < value)
			a = m + 1;
		else if (value < array[m])
			b = m - 1;
		else
			return (m);
	}
	return (-1);
}
