#include "lists.h"

/**
 * listint_len - function that returns
 * the number of elements in a linked listint_t list.
 *
 * @h: head of list
 *
 * Return: list len.
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{

		h = h->next;
		len++;
	}

	return (len);
}
