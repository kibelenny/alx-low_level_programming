#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: ower of dog
 * Return: struct of dog, NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, name_len = 0, owner_len = 0;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\0')
		owner_len++;

	p_dog->name = malloc(name_len + 1);
	p_dog->owner = malloc(owner_len + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < owner_len; i++)
		p_dog->owner[i] = owner[i];

	p_dog->owner[i] = '\0';

	for (i = 0; i < name_len; i++)
		p_dog->name[i] = name[i];

	p_dog->name[i] = '\0';

	p_dog->age = age;

	return (p_dog);
}
