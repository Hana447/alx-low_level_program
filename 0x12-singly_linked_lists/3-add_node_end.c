#include "lists.h"

/**
 * str_len - function to count the length of string
 *
 * @s: string to be counted
 *
 * Return: length of string
 */
int str_len(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(++s));
}

/**
 * add_node_end - a function that adds a new node at the end of a list_t
 * list.
 *
 * @head: head of the linked list
 * @str: string to be added
 *
 * Return: pointer to newly created node || null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t, *t2;

	t2 = *head;
	t = (list_t *)malloc(sizeof(list_t));
	if (t == NULL)
	return (NULL);
	if (str == NULL)
	{
	t->str = NULL;
	t->len = 0;
	}
	else
	{
	t->str = strdup(str);
	if (t->str == NULL)
	{
	free(t);
	return (NULL);
	}
	t->len = (unsigned int) str_len(str);
	}

	if (*head == NULL)
	{
	t->next = *head;
	*head = t;
	}
	else
	{
	while (t2->next != NULL)
	t2 = t2->next;
	t->next = t2->next;
	t2->next = t;
	}
	return (t);
}
