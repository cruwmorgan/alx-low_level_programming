#include <stdio.h>

/**
* print_alphabet - prints a - z
*/
void print_alphabet(void)
{
	char m;
	/* @for loops from a - z*/
	for (m = 'a'; m <= 'z'; m++)
		putchar(m);
	putchar('\n');
}
