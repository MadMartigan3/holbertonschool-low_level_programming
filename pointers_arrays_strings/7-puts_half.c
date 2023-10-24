#include "main.h"

/**
 * puts_half - function that prints half of a string
 *@str: input string
 *
*/

void puts_half(char *str)
{
	int taille, valeur;

	taille = 0;
	for (valeur = 0; str[valeur] != 0; valeur++)
	{
		taille++;
	}
	if (taille % 2 == 0)
	{
		for (valeur = taille / 2; valeur < taille; valeur++)
		{
			_putchar(str[valeur]);
		}
	}
	else
	{
		for (valeur = (taille -1) / 2; valeur < taille; valeur++)
		{
			_putchar(str[valeur]);
		}
	}
	_putchar('\n');
}
