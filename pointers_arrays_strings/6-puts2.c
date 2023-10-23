#include "main.h"

/**
 * puts2 - function that prints every other char of a string
 *
 *@str: string input
 *
*/

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
