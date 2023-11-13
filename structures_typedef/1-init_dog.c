#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - fonction qui initialise dog
 *@d: nom de la structure
 *@name: nom du chien dans la structure
 *@age: age du chien dans la structure
 *@owner: propriétaire du chien dans la structure
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
