#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: a pointer to the head of the listint_t list
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

