#include <stdio.h>
int str_len(char *g);
int n_palindrome(char *k, int j);

#include "main.h"

/**
* str_len - function that calculate length of string
* @g: a string pointer
* Return: length of string
*/

int str_len(char *g)
{
	/*@if checks string*/
	if (!*g)
		return (0);
	return (str_len(g + 1) + 1);
}

/**
* is_palindrome - function that returns 1 if a string is a palindrome and
* 0 if not.
* @s: a character
* Return: 1 if palindrome else 0
*/

int is_palindrome(char *s)
{
	int f;

	f = str_len(s);

	/*@if checks for palindrome*/
	if (f <= 1)
		return (1);
	return (n_palindrome(k, j));
}

/**
* n_palindrome - reverse string function
* @k: a string character
* @j: length of string
* Return: reversed string
*/

int n_palindrome(char *k, int j)
{
	/* @if checks and reverse string*/
	if (j <= 1)
		return (1);
	else if (*k == *(k + j - 1))
		return (n_palindrome(k + 1, j - 2));
	else
		return (0);
}
