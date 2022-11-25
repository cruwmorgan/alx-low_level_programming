#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: pointer to a list_t pointer that points to the head struct
* @str: a pointer to the string
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	/*@while loops through the string length*/
	while (str[length])
		length++;
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
