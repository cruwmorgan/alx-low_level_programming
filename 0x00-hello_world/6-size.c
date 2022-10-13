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

	printf("Size of a char: $lu byte(s)\n", (unsigned long)sizeof(han));
	printf("Size of an int: $lu byte(s)\n", (unsigned long)sizeof(an));
	printf("Size of a long int: $lu byte(s)\n", (unsigned long)sizeof(lan));
	printf("Size of a long long int: $lu byte(s)\n", (unsigned long)sizeof(nan));
	printf("Size of a float: $lu byte(s)\n", (unsigned long)sizeof(num));
	return (0);
}
