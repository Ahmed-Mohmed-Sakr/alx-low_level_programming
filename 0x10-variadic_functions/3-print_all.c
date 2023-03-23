#include "variadic_functions.h"


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
	unsigned int i = 0;
	va_list list;
	int sp = 0;
	char *s;
	unsigned int n = strlen(format);

	va_start(list, format);

	while (i < n)
	{
		if (format[i] == 'c')
		{
			printf("%c",va_arg(list, int));
			sp = 1;
		}
		else if (format[i] == 'i')
		{
			printf("%d",va_arg(list, int));
			sp = 1;
		}
		else if (format[i] == 'f')
		{
			printf("%f",va_arg(list, double));
			sp = 1;
		}
		else if (format[i] == 's')
		{
			s = va_arg(list, char*);

			if (s == NULL)
				printf("(nil)");
			else
				printf("%s",s);

			sp = 1;
		}



		if (sp && i != n - 1)
			printf(", ");

		sp = 0;
		i++;
	}

	va_end(list);
}
