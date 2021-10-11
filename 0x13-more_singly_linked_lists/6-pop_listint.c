#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *				and returns the head node’s data (n).
 * @head: head pointer.
 * Return: poped head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *current_head;
	int i;

	if (*head != NULL && head != NULL)
	{
		i = (*head)->n;
		current_head = (*head)->next;
		free(*head);
		*head = current_head;

		return (i);
	}
	else
	{
		return (0);
	}
}
