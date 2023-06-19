#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function that initializes a variable of type struct dog.
 * @age: age to initialize.
 * @d: pointer to struct dog to initialize.
 * @name: name to initialize.
 * @owner: owner to initialize.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
