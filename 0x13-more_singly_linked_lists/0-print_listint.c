#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c;
	const listint_t *current = h;
	/*
        *	while (current)
	*{
	*	printf("%d\n", current->n);
	*	c++;
	*	current = current->next;
	*}
	* Alternative way of doing the task
	*/
	for (c = 0; current; c++)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (c);
}
