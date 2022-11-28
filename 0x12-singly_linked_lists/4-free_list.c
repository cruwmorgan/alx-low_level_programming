#include <stdlib.h>
#include "lists.h"

/**
* free_list - function that frees a list_t list.
* @head: pointer to head element of list
* Return: 0 is returned
*/

void free_list(list_t *head)
{
	list_t *temp;
	temp = head;
	/*@whilee loops through head*/
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
