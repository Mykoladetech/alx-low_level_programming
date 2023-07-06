#include "lists.h"

/**
 * print_listint - all the link_list to be printed
 * @h:list of the type of the link list to be printed
 *
 * Return: nodes counted
 */
size_t print_listint(const listint_t *h)
{
	size_t dig = 0;

	while (h)
	{
		printf("%d\n", h->n);
		dig++;
		h = h->next;
	}

	return (dig);
}

