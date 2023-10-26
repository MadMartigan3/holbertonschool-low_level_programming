#include "main.h"

/**
 * reverse_array - function that reverse the content of an array
 *@a: input array
 *@n: input number of element in  array
 *
*/

void reverse_array(int *a, int n)
{
	int start, end, holder;

	end = n - 1;
	for (start = 0; start < (n / 2); start++, end--)
	{
		holder = a[start];
		a[start] = a[end];
		a[end] = holder;
	}
}
