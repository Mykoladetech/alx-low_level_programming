#include "lists.h"

/**
 * delete_nodeint_at_index - eliminated link list at particular index
 * @head: first element pointer
 * @index: node indecx to delete
 *
 * Return: -1 (fail), or 1 (success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int z;
	listint_t *odd = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(odd);
		return (1);
	}

	for (z = 0; z < index - 1; z++)
	{
		if (!odd || !(odd->next))
			return (-1);
		odd = odd->next;
	}


	current = odd->next;
	odd->next = current->next;
	free(current);

	return (1);
}

