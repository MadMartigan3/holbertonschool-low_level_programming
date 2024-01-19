#include "search_algos.h"

/**
*binary_search - search of a value in an array
*@array: pointer
*@size: number element
*@value: value search
*Return: index i
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL || !value)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		
		printf("Searching in array: ");

		for (i = 0; i < size; i++)
		{
			printf("%d ", array[i]);
			
			if (i < size - 1)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
