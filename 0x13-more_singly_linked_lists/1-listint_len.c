#include "lists.h"

/**
 * listint_len - link list number to treturn
 * @h: adverse link_list to traverse
 *
 * Return: nodes to return
 */
size_t listint_len(const listint_t *h)
{
	size_t lag = 0;

	while (h)
	{
		lag++;
		h = h->next;
	}

	return (lag);
}

