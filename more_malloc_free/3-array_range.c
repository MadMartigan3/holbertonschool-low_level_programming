#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *@min: smallest number in array
 *@max: largest value in array
 *
 *Return: a success.
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a != NULL)
	{
		for (i = min; i <= max; i++)
		{
			a[j] = i;
			j++;
		}
		return (a);
	}
	else
	{
		return (NULL);
	}
}
