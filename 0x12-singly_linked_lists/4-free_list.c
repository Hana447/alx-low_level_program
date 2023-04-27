#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *t, *t2;

	t = head;
	if (head == NULL)
	return;
	while (t != NULL)
	{
		t2 = t->next;
		if (t->str != NULL)
		free(t->str);
		free(t);
		t = t2;
	}
}
