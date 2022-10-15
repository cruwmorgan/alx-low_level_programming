#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all possible different combinations of three digits
* Return: 0 is returned
**/

int main(void)
{
	int m, n, g;
	/*@for loops from 0 to 8*/
	for (m = '0'; m < '9'; m++)
	{
		/*@for loops from m+1 to 9*/
		for (n = m + 1; n <= '9'; n++)
		{
			/*@for loops from n+1 to 9*/
			for (g = n + 1; g <= '9'; g++)
			{
				/*@if checks if m,n,g are not similar*/
				if ((m != n) != g)
				{
					putchar(m);
					putchar(n);
					putchar(g);
					/*@if checks if m is 7 and n is 8*/
					if (m == '7' && n == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
												}
	}
	putchar('\n');
	return (0);
}
