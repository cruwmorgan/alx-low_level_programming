#include<stdio.h>
#include "dog.h"

/**
* new_dog - function that creates a new dog.
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: 0 is returned
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpname, *cpowner;
	int l_name = 0, l_owner = 0, m;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[l_name])
		l_name++;
	while (owner[l_owner])
		l_owner++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpname = malloc(l_name + 1);
	if (cpname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpname[i] = name[i];
	cpname[i] = '\0';
	cpowner = malloc(l_owner + 1);
	if (cpowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpowner[i] = owner[i];
	cpowner[i] = '\0';
	new_dog->name = cpname;
	new_dog->age = age;
	new_dog->owner = cpowner;
	return (new_dog);
}
