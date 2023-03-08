#include "main.h"

/**
 * print_diagsums - function that prints
 * the sum of the two diagonals of a square matrix of integers.
 *
 * @a: array to print.
 * @size: array size.
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int MDiagonal = 0, PDiagonal = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				MDiagonal += a[i][j];

			if (i + j == size)
				PDiagonal += a[i][j];
		}
	}
	printf("%d, %d\n", MDiagonal, PDiagonal);
}
