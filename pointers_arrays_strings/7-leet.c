#include "main.h"

/**
 * leet - function that encodes a string
 *@s: input string
 *
 *
 * Return: value of s
*/

char *leet(char *s)
{
	int i, j;
	char *letters = "aeotlAEOTL";
	char *numbers = "4307143071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (s);
}
