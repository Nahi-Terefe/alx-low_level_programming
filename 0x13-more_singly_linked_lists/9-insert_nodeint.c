#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head pointer.
 * @idx: nth node of the list.
 * @n: integer to be inserted.
 * Return: pointer to the nth new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_head = *head, *new_node;

	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}

	while (current_head)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current_head->next;
			current_head->next = new_node;
			break;
		}

		current_head = current_head->next;
		i++;
	}

	return (new_node);
}
