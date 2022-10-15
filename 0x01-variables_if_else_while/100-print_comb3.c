#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all possible different combinations of two digits
* Return: 0 is returned
*/
int main(void)
{
	int m, n;
	/*@for loops through 0 to 9*/
	for (m = '0'; m < '9' ; m++)
	{
		/*@for loops from 0 to 8*/
		for (n = m + 1; n <= '9'; n++)
		{
			/*@if checks n to m*/
			if (n != m)
			{
				putchar(m);
				putchar(n);
				/*@if checks m to 8 and n to 9*/
				if (m == '8' && n == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
