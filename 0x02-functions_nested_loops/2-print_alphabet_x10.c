#include <stdio.h>

/**
* print_alphabet_x10 -  function that prints 10 times the alphabet, lowercase
* Return: 0 is returned
*/

void print_alphabet_x10(void)
{
	char m;
	int n;
	/* @for loops n fromm 1 to 10*/
	for (n = 0; n < 10; n++)
	{
		/* @for loops from a to z*/
		for (m = 'a'; m <= 'z'; m++)
			putchar(m);
		putchar('\n');
	}
}
