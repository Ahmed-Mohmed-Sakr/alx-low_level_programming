#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, t;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			t = j;

			if (t >= 10)
			{
				t /= 10;
			}

			_putchar(t + '0');
			if (j >= 10)
			{
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
