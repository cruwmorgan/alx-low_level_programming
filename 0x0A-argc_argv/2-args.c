#include <stdio.h>
#include "main.h"

/**
* main - program that prints all arguments it receives.
* @argc: an integer
* @argv: a character array
* Return: 0 is returned
*/

int main(int argc, char *argv[])
{
	/*@while loops through the arguments*/
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
