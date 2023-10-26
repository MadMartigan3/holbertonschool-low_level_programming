#include "main.h"

/**
 * _strncpy - function that copies a string
 *@src: input source
 *@dest: input destination
 *@n: input of numnber of bytes
 *
 * Return: dest value
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
