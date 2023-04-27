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
	const list_t *temp;
	unsigned int n = 0, length;
	char *string;

	temp = h;
	if (h == NULL)
	return (0);
	while (temp != NULL)
	{
		if (temp->string == NULL)
		{
		length = 0;
		string = "(nil)";
		}
		else
		{
		length = temp->length;
		string = temp->string;
		}
		printf("[%d] %s\n", length, string);
		temp = temp->next;
		n++;
	}
	return (n);
}
