#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integrer
 *
 *@n : the integrer
 *
 * Return: the absolute value
*/

int _abs(int n)
{
	if (n >= '0')
	{
		return (n);
	}
	else
		return (-n);
}
