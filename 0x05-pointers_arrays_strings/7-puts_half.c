#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str), i, n;

	n = (len + 1) / 2;

	for (i = n ; i < len ; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
