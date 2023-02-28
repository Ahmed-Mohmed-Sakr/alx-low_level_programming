#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s), n = len / 2, i;
	char temp;

	for (i = 0 ; i < n ; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
