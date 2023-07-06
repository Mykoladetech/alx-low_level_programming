#include "lists.h"

/**
 * free_listint - link list to be free
 * @head: list to printed
 */
void free_listint(listint_t *head)
{
	listint_t *odd;

	while (head)
	{
		odd = head->next;
		free(head);
		head = odd;
	}
}


