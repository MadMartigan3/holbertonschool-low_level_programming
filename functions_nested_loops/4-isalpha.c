#include "main.h"

/**
 * _isalpha - function that check for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if charater is letter, lowercase or upper, else 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
