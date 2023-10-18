#include "main.h"

/**
 * print_sign - function that print the sign of number
 *
 * @n: character to be checked
 *
 * Return: 1 si le nombre est plus grand que 0, 0 si le nombre est égale à 0,
 * -1 si le nombre est plus petit que 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
