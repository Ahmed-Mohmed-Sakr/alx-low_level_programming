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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return ('\0');
}
