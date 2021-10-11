#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *		index of a listint_t linked list.
 * @head: head pointer.
 * @index: nth node of the list.
 * Return: pointer to the nth new node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head, *previous_node = NULL;
	unsigned int i = 0;
	int success = -1;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node)
	{
		if (i == index)
		{
			previous_node->next = current_node->next;
			free(current_node);
			success = 1;
			break;
		}

		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}

	return (success);
}
