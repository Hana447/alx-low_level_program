#include "lists.h"
/**
  * reverse_listint - Function that reverese 
  * @head: param1
  * Return: head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *now = *head;
	listint_t *next;

	while (now != NULL)
	{
		next = now->next;
		now->next = pre;
		pre = now;
		now = next;
	}
	*head = pre;
	return (*head);
}
