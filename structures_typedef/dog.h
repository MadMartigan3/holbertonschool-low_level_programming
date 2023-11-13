#ifndef DOG_H

#define DOG_H

/**
 * struct dog - information sur le chien
 *@name: nom du chien
 *@age: age du chien
 *@owner: proprietaire du chien
 *
 *Result: information du chien.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
