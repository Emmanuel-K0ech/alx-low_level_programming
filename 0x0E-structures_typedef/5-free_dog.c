#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees space taken up by struct of type dog
 * @d: pointer to the structure
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
