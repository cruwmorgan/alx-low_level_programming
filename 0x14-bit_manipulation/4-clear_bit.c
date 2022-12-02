#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* clear_bit - function that sets the value of a bit to 0 at a given index.
* @n: a pointer to integer provided
* @index: the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	/*@if checks max is 0*/
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
