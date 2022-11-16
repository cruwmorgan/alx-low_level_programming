#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - function that prints a name.
* @name: a pointer to name character
* @f: pointer to a function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	/*@if checks for null input*/
	if (name == NULL || f == NULL)
		return;
	f(name);
}
