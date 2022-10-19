#include <stdio.h>
#include "main.c"

/**
* main - program that prints _putchar, followed by a new line
* Return: 0 is returned
*/

int main (void)
{
	char m[8] = "_putchar";
	int n;
	/* @for loops from _ to r of _putchar*/
	for (n = 0; n < 8; n++)
		putchar(m[n]);
	putchar('\n');
	return (0);
}
