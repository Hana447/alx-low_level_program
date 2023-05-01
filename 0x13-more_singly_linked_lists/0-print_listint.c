#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	const listint_t *now = h;
	
	while (now)
	{
		printf("%d\n", now->n);
		c++;
		now = now->next;
	}
	
	return (c);
}
