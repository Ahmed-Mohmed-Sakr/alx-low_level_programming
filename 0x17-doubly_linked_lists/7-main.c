#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	head = NULL;
	
	insert_dnodeint_at_index(&head, 0, 8888);
	print_dlistint(head);

	printf("\n---------------------\n");
	insert_dnodeint_at_index(&head, 0, 8888);
	print_dlistint(head);

	printf("\n-----------------------\n");
	insert_dnodeint_at_index(&head, 2, 8888);
	print_dlistint(head);

	printf("\n-----------------------\n");
	insert_dnodeint_at_index(&head, 2, 8888);
	print_dlistint(head);
	
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
