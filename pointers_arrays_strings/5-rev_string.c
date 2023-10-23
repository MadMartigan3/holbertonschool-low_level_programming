#include "main.h"

/**
 * rev_string - reverse string
 *@s: input string
 *
*/

void rev_string(char *s)
{
	int x, size = 0;
	int start;
	int end;
	char holder;

	for (x = 0; s[x] != '\0'; x++)
	{
		size++;
	}
	end = size - 1;

	for (start = 0; start < (size / 2); start++)
	{
		holder = s[start];
		s[start] = s[end];
		s[end] = holder;
		end--;
	}
}
