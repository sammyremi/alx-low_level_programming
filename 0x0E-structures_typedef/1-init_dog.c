#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializing variable type to struct dog
 * @d: structure d
 * @name: name of dog to init
 * @age: age of dog to init
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
