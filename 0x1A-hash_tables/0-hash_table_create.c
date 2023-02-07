#include "hash_tables.h"
#include <stdlib.h>

/**
* *hash_table_create - a pointer function that creates a hash table.
* @size: the size of the array
* Return: A pointer to the new hash table in memory (heap).
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int m = 0;
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	/*@if checks table*/
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	/*@if checks for array*/
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (; m < size; m++)
		(new_table->array)[m] = NULL;
	return (new_table);
}
