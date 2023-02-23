#include <stdio.h>

/**
 * main - start point.
 *
 * Description:
 * Each new term in the Fibonacci sequence is generated by
 * adding the previous two terms.
 * By starting with 1 and 2, the first 10 terms will be:
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 * By considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000, write a program
 * that finds and prints the sum of the even-valued terms.
 *
 * Return: int.
 */

int main(void)
{
	long int cur = 2, prv = 1, ans = 0, temp;

	while (cur <= 4000000)
	{
		if (cur % 2 == 0)
			ans += cur;

		temp = cur;
		cur += prv;
		prv = temp;
	}
	printf("%ld\n", ans);
	return (0);
}
