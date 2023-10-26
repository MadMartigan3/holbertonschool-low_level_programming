#include "main.h"

/**
 * _strcmp - function that compares two strings
 *@s1: first string
 *@s2: second string
 *
 * Return: entier
*/

int _strcmp(char *s1, char *s2)
{
	int i, e;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		e = 0;
	}
	else
	{
		e = s1[i] - s2[i];
	}
	return (e);
}
