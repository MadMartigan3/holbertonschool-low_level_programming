#include <stdio.h>

/**
 * main - function
 *
 *@putchar
 *
 *Always return Success (0)
**/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return(0);
}
