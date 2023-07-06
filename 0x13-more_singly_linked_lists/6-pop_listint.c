#include "lists.h"

/**
 * pop_listint - all the node link to be deleted
 * @head: first element to be pointed
 *
 * Return:deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int add;

	if (!head || !*head)
		return (0);

	add = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (add);
}

