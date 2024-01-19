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
	int i;
	int mid;
	int low = 0;
	int high = size - 1;

	if (array == NULL || !value)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d ", array[i]);
			
			if (i < high)
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
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
