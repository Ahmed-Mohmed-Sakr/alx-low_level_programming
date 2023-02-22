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
				_putchar('0' + ch1);
			}
			else
			{
				_putchar('0' + ch1);
			}

			_putchar(':');

			if (ch2 < 10)
			{
				_putchar('0');
				_putchar('0' + ch2);
			}
			else
			{
				_putchar('0' + ch2);
			}

			_putchar('\n');

		}
	}

}
