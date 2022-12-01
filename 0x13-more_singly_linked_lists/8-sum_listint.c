#include <stdio.h>
#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data (n) of a
* listint_t linked list.
* @head: A pointer listint_t structure
* Return: The sum of all the data n from list else 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	/*@if checks for null*/
	if (head == NULL)
		return (0);
	/*@while loops through head*/
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
