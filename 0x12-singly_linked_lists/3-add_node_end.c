#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - new node to be add at the end of the link list
 * @str: new node
 * @head: link list_list pointer
 *
 * Return: new element direction.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *hard;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	hard = malloc(sizeof(list_t));
	if (!hard)
		return (NULL);

	hard->str = strdup(str);
	hard->len = len;
	hard->next = NULL;

	if (*head == NULL)
	{
		*head = hard;
		return (hard);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = hard;

	return (hard);
}

