#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *t;
	unsigned int n = 0, len;
	char *str;

	t = h;
	if (h == NULL)
	return (0);
	while (t != NULL)
	{
		if (t->str == NULL)
		{
		len = 0;
		str = "(nil)";
		}
		else
		{
		len = t->len;
		str = t->str;
		}
		printf("[%d] %s\n", len, str);
		t = t->next;
		n++;
	}
	return (n);
}
