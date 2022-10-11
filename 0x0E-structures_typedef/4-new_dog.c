#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - new struct dog to be created
 * @name: namefor dog_t
 * @age: age for dog_t
 * @owner: owner for dog_t
 * Return: return null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	if (name == NULL)
		new_d->name = NULL;
	else
	{
		new_d->name = malloc(strlen(name) + 1);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->name = strcpy(new_d->name, name);
	}
	if (owner == NULL)
		new_d->owner = NULL;
	else
	{
		new_d->owner = malloc(strlen(owner) + 1);
		if (new_d->owner == NULL)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		new_d->owner = strcpy(new_d->owner, owner);
	}
	new_d->age = age;
	return (new_d);

}
