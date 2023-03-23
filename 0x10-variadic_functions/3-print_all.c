#include "variadic_functions.h"


/**
 * print_string - print string
 *
 * @s: string
 *
 * Return: void
 */
void print_string(char *s)
{
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all -  function that prints anything.
 *
 * @format: input format
 * @...: args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0,  n = strlen(format);
	va_list list;

	va_start(list, format);
	while (i < n)
	{
		if (format[i] == 'c')
			printf("%c", va_arg(list, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(list, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(list, double));
		else if (format[i] == 's')
			print_string(va_arg(list, char*));
		else
			continue;

		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(list);
}
