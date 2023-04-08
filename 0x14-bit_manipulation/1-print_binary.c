#include "main.h"

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
		return;

	print_binary(n >> 1);

	 putchar((int)(n & 1llu) + '0');
}
