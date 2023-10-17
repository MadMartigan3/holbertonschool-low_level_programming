#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char alphabet;

	for (i = 0; i < 9; i++)
	{
		putchar('0' + i);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
