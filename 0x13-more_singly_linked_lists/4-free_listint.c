#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - function that frees a listint_t list.
* @head: a pointer
* Return: nothing is returned
*/

void free_listint(listint_t *head)
{
	listint_t *temp;
	/*@while loops through h*/
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
