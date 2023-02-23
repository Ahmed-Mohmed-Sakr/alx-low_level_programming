#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: length
 *
 * Return: int
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			putchar(' ');
		}
		_putchar('\\');

		if (i != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
