#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: array to copy in it
 * @src: array to copy from
 * @n: array len
 *
 * Return: array with copy from src
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
