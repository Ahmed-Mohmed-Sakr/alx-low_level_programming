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
	char ch1, ch2;
	int c = 0;

	for (ch1 = '0' ; ch1 <= '9' ; ch1++)
	{
		for (ch2 = ch1 + 1 ; ch2 <= '9' ; ch2++)
		{
			if (c != 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(ch1);
			putchar(ch2);
			c = 1;
		}
	}
	putchar('\n');

	return (0);
}
