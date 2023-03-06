#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: string to search in
 * @needle: my needed substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int can = 1;
	char *p = NULL;

	while (haystack[i] != '\0')
	{
		j = 0;
		can = 1;
		while (needle[j] != '\0')
		{
			if (j == 0)
				p = &haystack[i];

			if (haystack[i + j] != needle[j])
			{
				can = 0;
				p = NULL;
			}
			j++;
		}

		if (can)
		{
			break;
		}

		i++;
	}

	return (p);
}
