#include "main.h"
#include <stdio.h>

/**
 * main - prints the all the arguments content
 *@argc: arguments count
 *@argv: arguments value
 *
 *Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
