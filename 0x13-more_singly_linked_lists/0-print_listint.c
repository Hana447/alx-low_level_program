#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;
	const listint_t *current = h;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		c++;
	}
	return (c);
}
