#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * print statement without using printf or puts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len=strlen(str);
	write(1, str, len);

	return (0);
}
