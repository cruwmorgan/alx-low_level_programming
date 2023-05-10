#include "search_algos.h"

/**
* advanced_binary - binary search function using recursion
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: the index where value is located
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, m = 0, n = 0, p = size - 1;
	/*@if checks for null array*/
	if (!array || size <= 0)
		return (-1);
	
}
