
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
		n = -1 * (m % 10);
	else
		n = m % 10;
	putchar(n);
	return (n);
}
