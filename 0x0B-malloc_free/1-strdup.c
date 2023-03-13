#include "main.h"

/**
 * _strdup -  function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to copy
 *
 * Return: new string
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
