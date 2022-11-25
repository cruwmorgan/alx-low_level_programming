#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer to the head of the list
* Return: number of nodes in list as size_t
*/

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;
	/*@while loops through the list*/
	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
