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

	ptr = (dog_t *) malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
