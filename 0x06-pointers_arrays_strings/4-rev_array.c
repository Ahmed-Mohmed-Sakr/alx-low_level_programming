#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: array of int
 * @n: array len
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, len = n;
	int temp;

	n = len / 2;
	for (i = 0 ; i < n ; i++)
	{
		temp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
}
