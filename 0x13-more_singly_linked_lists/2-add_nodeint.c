#include "lists.h"

/**
 * *add_nodeint - add new node at the beginning of the linked list.
 *
 * @n: an integer.
 * @head: pointer to a head.
 * Return: pointer to the head.
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);

}
