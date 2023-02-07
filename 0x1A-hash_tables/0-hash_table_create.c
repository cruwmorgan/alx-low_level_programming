#include "hash_tables.h"
#include <stdlib.h>

/**
* *hash_table_create - A function pointer that creates a hash table
* @size: The size of hash table.
* Return: A pointer to the new hash table in memory (heap).
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int m = 0;
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	/*@if checks for null*/
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	/*@for loops through size*/
	for (; m < size; m++)
		(new_table->array)[m] = NULL;
	return (new_table);
}
