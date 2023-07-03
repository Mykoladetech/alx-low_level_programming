#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - every beginning of the node should be added with new node
 * @head: pointer to the list
 * @str: string newly added to the node
 *
 * Return: null if the adress fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *move;
	unsigned int len = 0;

	while (str[len])
		len++;

	move = malloc(sizeof(list_t));
	if (!move)
		return (NULL);

	move->str = strdup(str);
	move->len = len;
	move->next = (*head);
	(*head) = move;

	return (*head);
}

