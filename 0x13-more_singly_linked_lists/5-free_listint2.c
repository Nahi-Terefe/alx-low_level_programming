#include "lists.h"

/**
 * free_listint2 - free linked list head from memory.
 * @head: head pointer.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_head;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		current_head = *head;
		*head = (*head)->next;
		free(current_head);
	}
}
