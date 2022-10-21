#include <stdio.h>
#include "main.h"

/**
* print_numbers -  function that prints the numbers, from 0 to 9
* Return: 0 is returned
*/

void print_numbers(void)
{
	int m = '0';
	/* #for loops from 0 to 9*/
	for (; m <= '9'; m++)
		putchar(m);
	putchar('\n');
}
