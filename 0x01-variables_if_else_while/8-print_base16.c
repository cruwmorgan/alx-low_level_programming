#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -  prints all the numbers of base 16 in lowercase
* Return: 0 is returned
*/
int main(void)
{
	int m, n;
	/*@for loops through 0 to 9*/
	for (m = '0'; m <= '9' ; m++)
	{
		putchar(m);
	}
	/*@for loops through a to f*/
	for (n = 'a'; n <= 'f' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
