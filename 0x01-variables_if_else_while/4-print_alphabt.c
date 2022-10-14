#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -  prints the alphabet in lowercase except q and e
* Return: 0 is returned
*/

int main(void)
{
	int m, e, q;
	e = 'e';
	q = 'q';
	/*@for prints the alphabet in lowercase except q and e*/
	for (m = 'a'; m <= 'z'; m++)
	{
		/*@if checks for q and e and prints others*/
		if (m != e && m != q)
			putchar(m);
	}
	putchar('\n');
	return (0);

}
