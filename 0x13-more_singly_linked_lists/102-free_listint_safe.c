#include "lists.h"

/**
 * free_listint_safe - linn list that deem
 * @h: first node pointer
 *
 * Return: amout doom link list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *odd;
	int move;
	size_t num = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		move = *h - (*h)->next;
		if (move > 0)
		{
			odd = (*h)->next;
			free(*h);
			*h = odd;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}

	*h = NULL;
	return (num);
}


