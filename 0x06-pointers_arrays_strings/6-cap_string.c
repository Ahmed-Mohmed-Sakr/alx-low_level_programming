#include "main.h"

/**
 * cap_string -
 *
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
