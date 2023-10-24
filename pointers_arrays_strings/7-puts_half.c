#include "main.h"

/**
 * puts_half - function that prints half of a string
 *@str: input string
 *
*/

void puts_half(char *str)
{
	int s, v;

	s = 0;
	for (v = 0; str[v] != 0; v++)
	{
		s++;
	}
	if (s % 2 == 0)
	{
		for (v = s / 2; v < s; v++)
		{
			_putchar(str[v]);
		}
	}
	else
	{
		for (v = (s / 2) + 1; v < s; v++)
		{
			_putchar(str[v]);
		}
	}
	_putchar('\n');
}
