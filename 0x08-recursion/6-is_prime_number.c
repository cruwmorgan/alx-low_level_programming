#include <stdio.h>
int num_prime(int, int);

#include "main.h"

/**
* is_prime_number - function that returns 1 if the input integer is a prime
* number, otherwise return 0.
* @n: an integer
* Return: 1 if prime number else 0
*/

int is_prime_number(int n)
{
	/* @if checks for prime numbers*/
	if (n == 2)
		return (1);
	return (num_prime(2, n));
}

/**
* num_prime - check divisibility
* @m: an integer
* @g: an integer
* Return: 1 for prime else 0
*/

int num_prime(int m, int g)
{
	/* @if returns o or 1*/
	if (g < 2 || g % m == 0)
		return (0);
	else if (m > g / 2)
		return (1);
	else
		return (num_prime(m + 1, g));
}
