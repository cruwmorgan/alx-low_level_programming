#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: 0 is returned
*/

int main(void)
{
	int m;
	/*@for prints alphabets*/
	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
		for (m = 'A'; m <= 'Z'; m++)
		{
			putchar(m);
		}
	}
	putchar('\n');
	return (0);
}
