#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a link list to be free
 * @head: number of link list to be free
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

