#include <stdio.h>

/**
* main -  program that prints the size of various types on the computer
* Return: 0 is returned
*/

int main(void)
{
	char han;
	int an;
	long int lan;
	long long int nan;
	float num;
	printf("Size of a char: $d byte(s)\n", sizeof(han));
	printf("Size of an int: $d byte(s)\n", sizeof(an));
	printf("Size of a long int: $d byte(s)\n", sizeof(lan));
	printf("Size of a long long int: $d byte(s)\n", sizeof(nan));
	printf("Size of a float: $d byte(s)\n", sizeof(num));
	return (0);
}
