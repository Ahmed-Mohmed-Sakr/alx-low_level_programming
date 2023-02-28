#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s) - 1;

	for (; len >= 0 ; len--)
	{
		printf("%c", s[len]);
	}
	printf("\n");
}
