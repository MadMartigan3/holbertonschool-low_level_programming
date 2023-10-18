#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that print the last digit
 *
 *@n: character checked
 *
 * Return: value last digit
*/

int print_last_digit(int n)
{
	int lastD = n % 10;

	if (lastD < 0)
	{
		lastD *= -1;
	}
		_putchar(lastD + '0');

		return (lastD);
}
