#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints the opcodes of its own main function
* @argc: argument count
* @argv: pointer to array
* Return: opcode in hexadecimal format, else 1 or 2
*/

int main(int argc, char *argv[])
{
	int bytes, m;
	unsigned char *func_ptr;
	/* @if checks for argument count*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	/*@if checks the converted array value*/
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	m = 0;
	if (bytes > 0)
	{
		/*@while loops through bytes*/
		while (m < (bytes - 1))
			printf("%02hhx ", func_ptr[m++]);
		printf("%hhx\n", func_ptr[m]);
	}
	return (0);
}
