#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: input
 *
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
