#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index.
* @n: pointer to integer
* @index: the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/*@if checks max is 0*/
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, index - 1));
}
