#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: pointer to string
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str), i;

	for (i = 0 ; i < len ; i += 2)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
