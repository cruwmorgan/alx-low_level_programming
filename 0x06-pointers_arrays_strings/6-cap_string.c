int separator(char m);
#include "main.h"

/**
* separator - Separators of words: space, tabulation,
* new line, ,, ;, ., !, ?, ", (, ), {, and }
* @m: a character
* Return: 1 if a separtor else 0
*/

int separator(char m)
{
	int g = 0;
	char sep[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')'
		, '{', '}' };
	/* @for loops through sep*/
	for (; g < 13; g++)
	{
		/* @if checks for listed separators*/
		if (m == sep[g])
			return (1);
	}
	return (0);
}

/**
* *cap_string - function that capitalizes all words of a string.
* @z: a character pointer
* Return: the capitalised string
*/

char *cap_string(char *z)
{
	int w = 0;
	/* @while loops through the string*/
	while (z[w])
	{
		/* @if checks for strings*/
		if (w == 0 && (z[w] >= 'a' && z[w] <= 'z'))
			z[w] -= 32;
		/* @if checks for separator*/
		if (separator(z[w] && (z[w + 1] >= 'a' && z[w + 1] <= 'z')))
			z[w + 1] -= 32;
		w++;
	}
	return (z);
}
