#include "lists.h"

/**
 * find_listint_loop - loop that contain link list
 * @head: searching link list
 *
 * Return: where the node start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *move = head;
	listint_t *run = head;

	if (!head)
		return (NULL);

	while (move && run && run->next)
	{
		run = run->next->next;
		move = move->next;
		if (run == move)
		{
			move = head;
			while (move != run)
			{
				move = move->next;
				run = run->next;
			}
			return (run);
		}
	}

	return (NULL);
}


