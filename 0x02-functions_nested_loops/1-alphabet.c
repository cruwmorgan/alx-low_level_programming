#include <stdio.h>
#include "main.h"

/**
* main -  function that prints the alphabet, in lowercase
* Return: 0 is returned
*/

int main(void)
{
	print_alphabet();
	return (0);
}
/**
* print_alphabet - prints a - z
*/
void print_alphabet(void)
{
	char m;
	/* @for loops from a - z*/
	for (m = 'a'; m < 'z'; m++)
		putchar(m);
	putchar('\n');
}
