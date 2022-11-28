#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t linked list
* @head: a pointer
* Return: the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;
	/*@if checks for null*/
	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
