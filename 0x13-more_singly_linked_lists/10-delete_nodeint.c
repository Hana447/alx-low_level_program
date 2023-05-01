#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in a
 * listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *pre, *now;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		now = *head;
		*head = now->next;
		free(now);
		return (1);
	}
	pre = NULL;
	now = *head;

	for (j = 0; now && j < index; j++)
	{
		pre = now;
		now = now->next;
	}
	if (j < index || !now)
		return (-1);
	pre->next = now->next;
	free(now);

	return (1);
}
