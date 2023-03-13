#include "main.h"

/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: array size
 * @c: assaignd value
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
