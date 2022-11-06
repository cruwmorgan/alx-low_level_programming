#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - program that prints the minimum number of coins to make
* change for an amount of money.
* @argc: an integer
* @argv: a character array
* Return: 0 is returned
*/

int main(int argc, char *argv[])
{
	int m, n = 0;
	/* @if checks if argument is 2*/
	if (argc == 2)
	{
		m = atoi(argv[1]);
		if (m < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (m % 25 >= 0)
		{
			n += m / 25;
			m = m % 25;
		}
		if (m % 10 >= 0)
		{
			n += m / 10;
			m = m % 10;
		}
		if (m % 5 >= 0)
		{
			n += m / 5;
			m = m % 5;
		}
		if (m % 2 >= 0)
		{
			n += m / 2;
			m = m % 2;
		}
		if (m % 1 >= 0)
			n += m;
		printf("%d\n", n);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
