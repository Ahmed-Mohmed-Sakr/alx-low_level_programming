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

	alp = 'a' - 1;
	do {
		alp += 1;

		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}

	} while (alp != 'z');
	putchar('\n');

	return (0);
}
