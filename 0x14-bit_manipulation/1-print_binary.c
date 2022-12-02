#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_binary - function that prints the binary representation of a number.
* @n: an integer
* Return: 0 is returned
*/

void print_binary(unsigned long int n)
{
	unsigned int flag = 0, max = 32768; /* 1000 0000 0000 0000 */
	/*@if checksn is 0*/
	if (n == 0)
	{
		putchar('0');
		return;
	}
	/*@while loops through n*/
	while (max)
	{
		if (flag == 1 && (n & max) == 0)
			putchar('0');
		else if ((n & max) != 0)
		{
			putchar('1');
			flag = 1;
		}
		max >>= 1;
	}
}
