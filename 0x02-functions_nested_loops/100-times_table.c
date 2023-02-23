#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0
 * the function should not print anything
 *
 * @n: input number.
 *
 * Return: void.
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	int i;
	int j;
	int ans;

	for (i = 0 ; i <= n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			ans = i * j;

			if (j == 0)
			{
				printf("%d", ans);
				continue;
			}

			if (ans < 10)
			{
				printf(",   %d", ans);
			}
			else if (ans < 100)
			{
				printf(",  %d", ans);
			}
			else
			{
				printf(", %d", ans);
			}
		}
		printf("\n");
	}
}
