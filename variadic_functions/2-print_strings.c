#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *@n: numbers of args
 *@separator: things to separate args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (!str)
		{
			str = "(nil)";
		}
		if (i == n - 1)
			separator = "";

		if (!separator)
		{
			printf("%s", str);
		}

		else
			printf("%s%s", str, separator);
	}
	printf("\n");
	va_end(ap);
}
