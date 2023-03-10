#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: array to search in
 * @c: char to search about
 *
 * Return: string from first match;
 */

char *_strchr(char *s, char c)
{
	char *p = NULL;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}

		i++;
	}

	if (s[i] == c)
		p = &s[i];

	return (p);
}
