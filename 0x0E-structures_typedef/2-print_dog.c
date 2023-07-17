#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a structure of type struct dog
 * @d: pointer to the structure dog
 *
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == 0)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
