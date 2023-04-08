#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: string of binary numbers
 *
 * Return: number in base 10.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = strlen(b), i, x = 1, ans = 0;

	if (b == NULL)
		return (0);

	for (i = n - 1 ; i >= 0 ; i++)
	{
		if (b[i] == '1')
			ans += x;
		else if (b[i] != '0')
			return (0);

		x *= 2;
	}

	return (ans);
}
