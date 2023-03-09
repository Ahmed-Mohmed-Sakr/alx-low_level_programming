#include "main.h"

/**
 * get_sqrt - to calculate the sqrt
 *
 * @n: number
 * @begin: begin of search
 * @end: max value to get
 *
 * Return: ans
 */
long int get_sqrt(int n, int begin, int end)
{
	long int mid = begin + (end - begin) / 2;
	long int ans = mid * mid;

	if (ans == n)
		return (mid);
	else if (begin > end)
		return (-1);
	else if (ans > n)
		return (get_sqrt(n, begin, mid - 1));
	else
		return (get_sqrt(n, mid + 1, end));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: integer number.
 *
 * Return: sqrt(n).
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_sqrt(n, 0, n));



}
