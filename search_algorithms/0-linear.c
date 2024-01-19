#include "search_algos.h"

/**
*linear_search - search of value in an array
*@array: pointer
*@size: number element
*@value: value search
*Return: index i
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || !value)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
