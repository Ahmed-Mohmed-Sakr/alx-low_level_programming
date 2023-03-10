#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: first string
 * @src: second string.
 * @n: maximum length
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen = strlen(dest);
	int i;
	int srcLen = strlen(src);

	for (i = 0 ; i < srcLen && i < n ; i++)
	{
		dest[destLen + i] = src[i];
	}

	return (dest);
}
