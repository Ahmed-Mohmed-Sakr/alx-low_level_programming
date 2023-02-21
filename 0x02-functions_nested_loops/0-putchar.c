#include "main.h"

/**
 * main - Entry point
 *
 * program that prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Sccess)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int c = 0;

	while (str[c] != '\n')
	{
		_putchar(str[c]);
		c++;
	}

	return (0);
}
