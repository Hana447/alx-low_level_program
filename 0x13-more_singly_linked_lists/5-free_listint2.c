#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *now = *head;
	listint_t *next;

	if (head == NULL)
		return;
	while (now)
	{
		next = now->next;
		free(now);
		now = next;
	}
	*head = NULL;
}
