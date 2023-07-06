#include "lists.h"
#include <stdio.h>


/**
 * looped_listint_len - number of the counted node
 * @head: linktint check pointer.
 *
 * Return: link looped, if not looped - 0.
 * Otherwise - special node in the list.
 */
size_t looped_listint_elf(const listint_t *head)
{
	const  listint_t *moise;
	const listint_t *elm;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	moise = head->next;
	elm = (head->next)->next;

	while (elm)
	{
		if (moise == elm)
		{
			moise = head;
			while (moise != elm)
			{
				nodes++;
				moise = moise->next;
				elm = elm->next; }

			moise = moise->next;
			while (moise != elm)
			{
				nodes++;
				moise = moise->next;
			}

			return (nodes);
		}

		moise = moise->next;
		elm = (elm->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - list that prints list.
 * @head: direction to the end of the list.
 *
 * Return: the node list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	size_t digit = 0;

	nodes = looped_listint_elf(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		while (digit < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			digit++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

