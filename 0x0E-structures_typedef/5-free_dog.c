#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - memmory allocated are to be free
 * @d: dog struct to be free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

