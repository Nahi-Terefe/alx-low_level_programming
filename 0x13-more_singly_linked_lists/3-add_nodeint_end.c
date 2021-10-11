#include "lists.h"

/**
 * *add_nodeint_end - add new node at the end of the linked list.
 *
 * @n: an integer.
 * @head: pointer to a head.
 * Return: pointer to the head.
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *current_end = *head;

	new_end = malloc(sizeof(listint_t));

	if (new_end == NULL)
	{
		free(new_end);
		return (NULL);
	}

	/**
	* let's got to the current end node.
	*/
	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		while (current_end->next != NULL)
		{
			current_end = current_end->next;
		}
		current_end->next = new_end;
	}

	new_end->n = n;
	new_end->next = NULL;

	return (new_end);

}
