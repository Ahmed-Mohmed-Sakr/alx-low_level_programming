#include <stdio.h>

/**
 * main - start point.
 *
 * Description:
 * program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space.
 *
 * Return: int.
 */

int main(void)
{
	long int cur = 2, prv = 1, i, temp;

	printf("1");
	for (i = 1 ; i < 50 ; i++)
	{
		printf(", %d", cur);
		temp = cur;
		cur += prv;
		prv = temp;
	}
	printf("\n");
	return (0);
}
