#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: first string
 * @src: second string.
 * @n: maximum length
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srcLen = strlen(src);

	for (i = 0 ; i < srcLen && i < n ; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
