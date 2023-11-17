#include "function_pointers.h"

/**
 * print_name - fonction qui affiche un nom
 *@name: string input
 *@f: pointer qui pointe vers la fonction
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	
	(*f)(name);
}
