#include "main.h"

/**
* _puts - function that prints a string, followed by a new line, to stdout
* @str: a character
* Return: void
*/

void _puts(char *str)
{
	int m = 0;

	/* @while checks for null and loops*/
	while (str[m] != '\0')
	{
		putchar(str[m]);
		m++;
	}
	putchar('\n');
}
