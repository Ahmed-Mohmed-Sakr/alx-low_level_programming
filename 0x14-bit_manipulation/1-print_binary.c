#include "main.h"

/**
 */
int bits_length(unsigned long int n)
{
	int len = 0;
	
	while (n != 0)
	{
		n = (n>>1);
		len++;
	}
	return (len);
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
	int len;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	len = bits_length(n) - 1;
	
	while (len >= 0)
	{
		if((n & (1llu << len)))
			_putchar('1');
		else
			_putchar('0');

		len--;
	}
}
