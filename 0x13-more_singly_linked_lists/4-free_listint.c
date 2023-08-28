#include "lists.h"

/**
 * free_listint - releases the memory occupied by a linked list
 * @head: indicates pointer to the beginning of the listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

