#include <stdio.h>
#include "list.h"
/**
 *list_len - functions that return the number of element in a linked list
 *@h: pointer to the list_t list
 *Return: number of element in h list_t
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
	h++;
	h = h->next;
	}
	return (n);
}
