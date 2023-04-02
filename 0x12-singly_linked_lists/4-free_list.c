#include <stdio.h>
#include <stlib.h>
#include <string.h>
#include "list_h"
/**
 *free_list - function that free a list_t list
 *@head: a pointer to the list
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
