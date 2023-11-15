#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function qui libere la memoire alloué
 *@d: structure
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
