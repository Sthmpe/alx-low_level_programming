#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: The sturct to initialize.
 * @name: member of the struct.
 * @age: Member of the struct.
 * @owner: Member of the struct.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
