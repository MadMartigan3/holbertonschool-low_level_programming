#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an array of char
 *@size: taille du tableau
 *@c: character spécifique
 *
 * Return: pointeur
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(*a) * size);

	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (a);
}
