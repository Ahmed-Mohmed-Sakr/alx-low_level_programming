#include "main.h"

/**
 * str_concat -  function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 + s2; 
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, len1,len2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	len1 = strlen(s1);
	len2 = strlen(s2);

	s = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
	{
		s[i] = s1[i];
	}

	for (i = len1 ; i <= len1 + len2 ; i++)
	{
		s[i] = s2[i - len1];
	}

	return (s);
}
