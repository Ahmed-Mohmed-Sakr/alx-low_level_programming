#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all possible combinations of single-digit numbers.
 *
 * You are not allowed to use any variable of type char.
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden).
 *
 * You can only use putchar twice in your code.
 * All your code should be in the main function.
 *
 * Return: Always 0 (Sccess)
 */
int main(void)
{
	int num = -1;

	do {
		num += 1;

		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

	} while (num != 9);
	putchar('\n');

	return (0);
}
