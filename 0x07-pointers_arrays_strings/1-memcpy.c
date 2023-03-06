#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string to search in
 * @c: char to search about
 *
 * Return: pointer to begin of match
 */

char *_strchr(char *s, char c)
{
	char *p = NULL;
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}

	return (P);
}
