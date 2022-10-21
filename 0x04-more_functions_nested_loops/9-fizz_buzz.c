#include <stdio.h>
#include "main.h"

/**
* fizz_buzz - program that prints the numbers from 1 to 100, followed by a new
* line, But for multiples of three print Fizz instead of the number and for the
* multiples of five print Buzz. For numbers which are multiples of both three
* and five print FizzBuzz
* Return: 0 is returned
*/

void fizz_buzz(void)
{
	int m;
	/* @for loops from 1 to 99*/
	for (m = 1; m < 100; m++)
	{
		/* @if checks for multiples of 3, 5*/
		if (m % 3 == 0 && m % 5 == 0)
			printf("FizzBuzz ");
		else if (m % 3 == 0)
			printf("Fizz ");
		else if (m % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", m);
	}
	printf("Buzz\n");
}
