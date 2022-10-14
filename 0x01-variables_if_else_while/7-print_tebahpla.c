#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -   prints the lowercase alphabet in reverse
* Return: 0 is returned
*/

int main(void)
{
	int m;
	/*@for loops through z back to a*/
	for (m = 'z'; m >= 'a' ; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
