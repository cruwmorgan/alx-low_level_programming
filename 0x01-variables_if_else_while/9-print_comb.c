#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -  prints all possible combinations of single-digit numbers
* Return: 0 is returned
*/
int main(void)
{
	int m;
	/*@for loops through 0 to 9*/
	for (m = '0'; m <= '9' ; m++)
	{
		putchar(m);
		if (m!='9') {
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
