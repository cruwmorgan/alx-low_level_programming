#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - a function pointer that adds a new node at the end of a
* listint_t list.
* @head: pointer to list structure
* @n: a constant integer
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	/*@if checks for null*/
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	/*@if checks for null*/
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
