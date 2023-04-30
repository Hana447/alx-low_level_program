#include <stddef.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;
	const listint_t *now = h;

	for (c = 0; now; c++)
		now = now->next;
	return (c);
}

