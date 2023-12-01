#include "main.h"

/**
* print_binary - function that print binary rep of an int 
*@n: input int 
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
