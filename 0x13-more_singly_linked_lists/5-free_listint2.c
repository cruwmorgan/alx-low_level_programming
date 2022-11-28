#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
* @head: a pointer
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	/*@if checks for null*/
	if (head == NULL)
		return;
	temp = *head;
	/*@while loops through head*/
	while (*head)
	{
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
