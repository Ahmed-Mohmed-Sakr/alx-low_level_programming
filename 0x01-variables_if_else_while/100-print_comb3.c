#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Sccess)
 */
int main(void)
{
	int ch1, ch2;
	int c = 0;

	for (ch1 = 0 ; ch1 <= 9 ; ch1++)
	{
		for (ch2 = ch1 + 1 ; ch2 <= 9 ; ch2++)
		{
			if (c == 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(ch1 + '0');
			putchar(ch2 + '0');
			c = 1;
		}
	}
	putchar('\n');

	return (0);
}
