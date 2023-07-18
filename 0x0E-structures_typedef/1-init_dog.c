#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of tye struct dog
 * @d: pointer to structure memory location
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
