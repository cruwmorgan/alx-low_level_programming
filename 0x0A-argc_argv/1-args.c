#include <stdio.h>
#include "main.h"

/**
* main - program that prints the number of arguments passed into it.
* @argc: an integer
* @argv: a character array
* Return: 0 is returned
*/

int main(int argc, char *argv[])
{
	/*@if checks if string is present*/
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
