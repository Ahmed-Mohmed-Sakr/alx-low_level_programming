#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *
 * @n: length
 *
 * Return: void
 */

void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}


	for (i = 1 ; i <= n ; i++)
	{
		for (j = i + 1 ; j <= n ; j++)
		{
			_putchar(' ');
		}
		for (j = 1 ; j <= i ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
