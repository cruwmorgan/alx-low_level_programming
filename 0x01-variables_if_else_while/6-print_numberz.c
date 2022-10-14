#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -   prints all single digit numbers of base 10 starting from 0
* Return: 0 is returned
*/

int main(void)
{
	int m;
	/*@for loops through 0 to 9*/
	for (m = 0; m < 10 ; m++)
	{
		printf("%d", m);
	}
	putchar('\n');
	return (0);
}
