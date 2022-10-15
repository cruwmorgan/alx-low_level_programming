#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -  prints all possible combinations of single-digit numbers
* Return: 0 is returned
*/
int main(void)
{
	int m, n;
	/*@for loops through 0 to 8*/
	for (m = '0'; m < '9' ; m++)
	{
		/*@for loops through 0 to 9*/
		for (n = m + 1; n <= 9; n++)
		{
			/*@if checks if n and m are similar*/
			if (n != m)
			{
				putchar(m);
				putchar(n);
				/*@if checks if n is not 9 and m not 8*/
				if (n != '9' && m != '8')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
