#include <stdio.h>
#include "main.h"

/**
* print_most_numbers -  function that prints the numbers, from 0 to 9,Do not
* print 2 and 4
* Return: 0 is returned
*/

void print_most_numbers(void)
{
	int m = '0';
	/* #for loops from 0 to 9*/
	for (; m <= '9'; m++)
	{
		/* @if checks out 2 and 4 */
		if (m != '2' && m != '4')
			putchar(m);
	}
	putchar('\n');
}
