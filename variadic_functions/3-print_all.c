#include "variadic_functions.h"

/**
 * print_char - function that print a char
 *@ap: va list
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - function that print an int
 *@ap: va_list
 */

void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_float - function that print a float
 *@ap: va_list
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - function that print a string
 *@ap: va_list
 */

void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);
}


/**
 * print_all - function that prints anything
 *@format: function format
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *sep = "";
	va_list ap;

	choice list[] = {
			{'c', print_char},
			{'f', print_float},
			{'i', print_int},
			{'s', print_string},
			{'\0', NULL}
		};

	va_start(ap, format);

	while (format && format[i])
	{
		while (list[j].letter)
		{
			if (format[i] == list[j].letter)
			{
				printf("%s", sep);
				list[j].print(ap);
				sep = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(ap);
}
