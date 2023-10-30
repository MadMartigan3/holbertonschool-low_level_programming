#include "main.h"

/**
 * sqrt1 - function helper for _sqrt_recursion
 *@number: number integer
 *@root: racines
 *
 * Return: value of root
*/

int sqrt1(int number, int root)
{
	if ((root * root) > number)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
		return (sqrt1(number, root + 1));
}
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 *@n: input number
 *
 * Return: 0 success.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (sqrt1(n, 0));
}
