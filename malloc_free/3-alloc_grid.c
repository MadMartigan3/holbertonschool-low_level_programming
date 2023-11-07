#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - fucntion that returns a pointer to a 2 dimensional
 * array of integers.
 *@width: largeur array
 *@height: hauteur array
 *
 *Return: array.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	array = (int **) malloc(sizeof(int *) * height);

	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					array[i][j] = 0;
				}
			}
			else
			{
				for (i = 0; i >= 0; i--)
				{
					free(array[i]);
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
