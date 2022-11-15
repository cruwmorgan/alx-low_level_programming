#include<stdlib.h>
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
	/* @if checks for null*/
	if (name == NULL || owner == NULL)
		return (NULL);
	/*@while loops for length*/
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
	for (m = 0; name[m]; m++)
		cpname[m] = name[m];
	cpname[m] = '\0';
	cpowner = malloc(l_owner + 1);
	if (cpowner == NULL)
		return (NULL);
	for (m = 0; owner[m]; m++)
		cpowner[m] = owner[m];
	cpowner[m] = '\0';
	new_dog->name = cpname;
	new_dog->age = age;
	new_dog->owner = cpowner;
	return (new_dog);
}
