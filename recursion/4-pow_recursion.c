#include "main.h"

/**
 * _pow_recursion - function that return the value of x power y
 *@x: number
 *@y: puissance
 *
 * Return: success 0.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
		return (_pow_recursion(x, y - 1) * x);

}
