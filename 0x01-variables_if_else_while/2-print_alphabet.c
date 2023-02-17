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
	char alp;

	alp = 'a' - 1;
	do {
		alp += 1;
		putchar(alp);

	} while (alp != 'z');

	putchar('\n');

	return (0);
}
