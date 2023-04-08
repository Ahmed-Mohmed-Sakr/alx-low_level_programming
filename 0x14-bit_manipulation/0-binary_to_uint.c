#include "main.h"

/**
 * _strlen - get string len.
 *
 * @s: string.
 *
 * Return: string len.
 */
int _strlen(const char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		idx++;
	}

	return (idx);
}


/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: string of binary numbers
 *
 * Return: number in base 10.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1, ans = 0;
	int i, n;

	if (n == NULL)
		return (0);

	 n = _strlen(b);
	for (i = n - 1 ; i >= 0 ; i--)
	{
		if (b[i] == '1')
			ans += x;

		else if (b[i] != '0')
			return (0);

		x *= 2;
	}

	return (ans);
}
