#include "lists.h"

/**
 * get_nodeint_at_index - node to return at certain index
 * @index: index of node to return
 * @head: link list first node
 * Return: pointer to new node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *odd = head;

	while (odd && k < index)
	{
		odd = odd->next;
		k++;
	}

	return (odd ? odd : NULL);
}

