#include "dog.h"
#include <stdlib.h>

/**
* init_dog - it initialize a variable of type struct dog
* @d: initialize struct here
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: 0 is returned
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
