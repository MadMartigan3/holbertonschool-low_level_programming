#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional
 *@grid: bloque de memoire liberer
 *@height: hauteur du tableau
 *
 *Return: void success.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
