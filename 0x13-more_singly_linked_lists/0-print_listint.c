#include <stdio.h>
#include "lists.h"

/**
* print_listint - function that prints all the elements of a listint_t list.
* @h: a pointer to listint structure
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	/*@while loops through h*/
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
