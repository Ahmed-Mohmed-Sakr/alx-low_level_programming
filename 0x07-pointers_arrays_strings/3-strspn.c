#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: array to search in
 * @accept: accepted segmant in array
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i = 0, j = 0;
	bool can = false;

	while (s[i] != '\0')
	{
		j = 0;
		can = false
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				can = true;
				len++;
				break;
			}
			j++;
		}

		if (!can)
		{
			break;
		}

		i++;
	}

	return (len);
}
