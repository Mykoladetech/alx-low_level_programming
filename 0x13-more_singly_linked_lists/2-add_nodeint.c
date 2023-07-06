#include "lists.h"

/**
 * add_nodeint - new node to be add to the beginning of the list
 * @head: first pointer to the new node
 * @n: input data
 *
 * Return:node pointer, null if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *odd;

	odd = malloc(sizeof(listint_t));
	if (!odd)
		return (NULL);

	odd->n = n;
	odd->next = *head;
	*head = odd;
	return (odd);
}

