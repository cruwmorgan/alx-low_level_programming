#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all possible combinations of two two-digit numbers
* Return: 0 is returned
*/

int main(void)
{
	int m, n;
	/*@for loops from 0 to 98*/
	for (m = 0; m <= 98; m++)
	{
		/*@for loops from m+1 to 99*/
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			/*@if checks if m is 98 and n is 99*/
			if (m == 98 && n == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
