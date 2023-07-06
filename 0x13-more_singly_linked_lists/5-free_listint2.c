#include "lists.h"

/**
 * free_listint2 - link list to set go
 * @head: link list pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *odd;

	if (head == NULL)
		return;

	while (*head)
	{
		odd = (*head)->next;
		free(*head);
		*head = odd;
	}

	*head = NULL;
}

