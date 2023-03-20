#include "dog.h"

/**
 * init_dog - init struct of type dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->owner = owner;
		d->age=age;
	}
}
