#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog variable
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Return: dog_t (success) NULL (failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(name) + sizeof(float) + sizeof(owner) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
