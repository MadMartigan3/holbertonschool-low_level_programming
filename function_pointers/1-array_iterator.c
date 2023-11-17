#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - fonction qui exécute une fonction donnée en
 * paramètre sur chaque élément d'un tableau.
 *@array: tableau d'entier
 *@size: taille du tableau
 *@action: pointeur fonction
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
