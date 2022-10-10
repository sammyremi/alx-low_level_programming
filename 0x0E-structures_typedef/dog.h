#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog.
 * @name: name of dog
 * @age:age of dog
 * @owner: owner of dog
 * @dog_t: new struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;

	struct dog dog_t;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
