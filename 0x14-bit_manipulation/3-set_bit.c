#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index
* @n: integer provided
* @index: the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	/*@if checks max is 0*/
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
