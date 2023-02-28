#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: pointer to first number
 * @b: pointer to second number
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
