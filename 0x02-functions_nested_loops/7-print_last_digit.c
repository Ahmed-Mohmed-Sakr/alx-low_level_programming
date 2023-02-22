#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: input int to check
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar(lastDigit);
	return (lastDigit);
}
