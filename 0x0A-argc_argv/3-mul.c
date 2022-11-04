#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that multiplies two numbers.
* @argc: an integer
* @argv: a character array
* Return: 1 if error else 0
*/

int main(int argc, char **argv)
{
	int m, n, g;
	/* @if checks 2 arguments are given*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		g = m * n;
		printf("%d\n", g);
		return (0);
	}
}
