#include <stdio>

/**
* print_last_digit - function that prints the last digit of a number
* Return: last value is returned
* @m: an input
*/

int print_last_digit(int m)
{
	int n;
	/* @if checks for m < 0*/
	if (m < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;
	putchar((n % 10) + '0');
	return (n % 10);
}
