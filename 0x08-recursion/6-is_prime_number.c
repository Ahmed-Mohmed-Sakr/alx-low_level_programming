#include "main.h"

/**
 * is_prime - check prime
 *
 * @n: number
 * @i: dividor
 *
 * Return: ans
 */
int is_prime(int n, int i)
{
	int ans = 1;

	if (i * i > n)
		return (1);

	if (n % i == 0)
	{
		ans = (ans && 0 && is_prime(n, i + 1));
	}
	else
	{
		ans =  (ans && is_prime(n, i + 1));
	}

	return (ans);
}

/**
 * is_prime_number - function that
 * returns 1 if the input integer is a prime number, otherwise return 0.
 *
 * @n: integer number.
 *
 * Return: 0 or 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_prime(n, 2));

}
