#include <stdlib.h>
#include "lists.h"

/**
 * list_len - itemise the number of element
 * @h:  list_t list pointer
 *
 * Return: h element list
 */
size_t list_len(const list_t *h)
{
	size_t z = 0;

	while (z)
	{
		z++;
		h = h->next;
	}
	return (z);
}

