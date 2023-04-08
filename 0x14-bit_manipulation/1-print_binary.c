#include "main.h"

/**
 * p_binary - print binary.
 *
 * @n: number.
 *
 * Return: void.
 */
void p_binary(unsigned long int n)
{
	if (n == 0)
		return;

	p_binary(n >> 1);
	_putchar((int)(n & 1llu) + '0');
}


/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to print.
 *
 * Return: void;
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	p_binary(n);
}
