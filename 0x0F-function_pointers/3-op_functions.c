#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - function that sums 2 values
* @a: an integer
* @b: an integer
* Return: the sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - function that substract 2 values
* @a: an integer
* @b; an integer
* Return: The result
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - function that multiples 2 values
* @a: an integer
* @b: an integer
* Return: the result
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function that divides 2 values
* @a: an integer
* @b: an integer
* Return: the result
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - function that find the modulus of 2 values
* @a: an integer
* @b: an integer
* Return: the result
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
