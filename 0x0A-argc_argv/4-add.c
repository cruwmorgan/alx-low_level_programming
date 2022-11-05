#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - program that adds positive numbers.
* @argc: an integer
* @argv: a character array
* Return: 1 if error else 0
*/

int main(int argc, char *argv[])
{
	int m, n = 0, g;
	/* @while loops through argc*/
	while (argc-- > 1)
	{
		/* @for loops argv*/
		for (g = 0; argv[argc][g]; g++)
		{
			/* @if checks if digit else error*/
			if (!(isdigit(argv[argc][g])))
			{
				printf("Error\n");
				return (1);
			}
		}
		m = atoi(argv[argc]);
		n += m;
	}
	printf("%d\n", n);
	return (0);
}
