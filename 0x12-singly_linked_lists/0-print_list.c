#include <stdio.h>
#include "lists.h"

/**
 * print_list - the element that linked to the link list are to be printed
 * @h: link list pointer
 *
 * Return: the list numb
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		z++;
	}

	return (z);
}

