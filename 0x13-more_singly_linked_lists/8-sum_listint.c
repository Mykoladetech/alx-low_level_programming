#include "lists.h"

/**
 * sum_listint - link list sum to be caclated
 * @head: link list firt to be calculate
 *
 * Return: resulting num
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int num = 0;

	while (temp)
	{
		num += temp->n;
		temp = temp->next;
	}

	return (num);
}

