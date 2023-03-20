#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>

/**
 * dog_t - Typeof for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - struct that stores info about a dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
