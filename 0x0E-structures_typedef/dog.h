#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog -structure for a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Description: new type struct dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*_DOG_H_*/
