#include <stdio.h>
#include "lists.h"

/**
* listint_len - function that returns the number of elements in a linked
* listint_t list. 
* @h: a pointer 
* Return: number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	/*@while loops through h*/
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
