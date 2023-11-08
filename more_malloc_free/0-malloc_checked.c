#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 *@b: size of memory
 *
 *Return: check success.
 */

void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
	{
		exit(98);
	}
	return (check);
}
