#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *@s: input string
 *
 * Return: value of resultat
*/

int _atoi(char *s)
{
	short boolean;
	int x, minimum, resultat;

	x = minimum = resultat = 0;
	minimum = -1;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
			minimum *= -1;
		if (s[x] >= '0' && s[x] <= '9')
		{
			resultat *= 10;
			resultat -= (s[x] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		x++;
	}
	resultat *= minimum;
	return (resultat);
}
