#include <stdio.h>
#include "main.h"

/**
* main - program that prints its name
* @argc: an integer
* @argv: a character array
* Return: 0 is returned
*/

int main(int argc, char *argv[])
{
	/* @if checks if argc is not null*/
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
