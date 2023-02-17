#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 *
 * Return: Always 0 (Sccess)
 */
int main(void)
{
	char alp;

	alp = '0' - 1;
	do {
		alp += 1;

		putchar(alp);
		if (alp == '9')
		{
			alp = 'a' - 1;
		}

	} while (alp != 'f');
	putchar('\n');

	return (0);
}
