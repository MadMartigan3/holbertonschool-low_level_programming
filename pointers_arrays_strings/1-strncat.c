#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *@src: input source
 *@dest: input destination
 *@n: input of byte
 *
 * Return: dest value
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i =0; dest[i]; i++)
	{
	}
	for (j = 0; j < n && src[j]; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
