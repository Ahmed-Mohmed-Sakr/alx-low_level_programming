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

	if(n <= 0)
	{
		_putchar('\n');
		return;
	}


	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
