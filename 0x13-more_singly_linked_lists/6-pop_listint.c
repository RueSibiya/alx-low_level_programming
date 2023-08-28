#include "lists.h"

/**
 * pop_listint - removes the initial node of a linked list
 * @head: a pointer to the pointer to the first element in the linked list
 * Return: the data contained in the removed node or 0 for an empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

