#include "main.h"

/**
 *  jack_bauer - function that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int c1, c2;

	for (c1 = 0 ; c1 < 24 ; c1++)
	{
		for (c2 = 0 ; c2 < 60 ; c2++)
		{
			if (c1 < 10)
			{
				_putchar('0');
				_putchar(c1 + '0');
			}
			else
			{
				_putchar((c1 / 10) + '0');
				_putchar((c1 % 10) + '0');
			}

			_putchar(':');

			if (c2 < 10)
			{
				_putchar('0');
				_putchar(c2 + '0');
			}
			else
			{
				_putchar((c2 / 10) + '0');
				_putchar((c2 % 10) + '0');
			}

			_putchar('\n');

		}
	}

}
