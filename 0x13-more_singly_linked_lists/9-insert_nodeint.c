#include "lists.h"

/**
 * insert_nodeint_at_index - new node to be inserted in link list.
 * @n: new node data
 * @head: first pointer to node node
 * @idx: digit that added new node
 *
 * Return: new node pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *odd = *head;
	listint_t *current = NULL;

	odd = malloc(sizeof(listint_t));
	if (!odd || !head)
		return (NULL);

	odd->n = n;
	odd->next = NULL;

	if (idx == 0)
	{
		odd->next = *head;
		*head = odd;
		return (odd);
	}

	for (z = 0; current && z < idx; z++)
	{
		if (z == idx - 1)
		{
			odd->next = current->next;
			current->next = odd;
			return (odd);
		}
		else
			current = current->next;
	}

	return (NULL);
}

