#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - a function pointer that adds a new node at the beginning
* of a listint_t list.
* @head: pointer to list_t structure
* @n: a constant integer
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	/*@if checks for head*/
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
