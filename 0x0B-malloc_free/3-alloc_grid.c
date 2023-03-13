#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: array width
 * @height: array height
 *
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = calloc(width, sizeof(int*));
	if(arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = calloc(height,  sizeof(int));
		if(arr[i] == NULL)
			return (NULL);
	}

	return (arr);
}
