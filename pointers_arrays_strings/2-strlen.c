#include "main.h"

/**
 * _strlen - function that return the lenght of a string
 *@s: input string
 *
 * Return: lenght string
*/

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

		return (x);
}
