#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head pointer.
 * @index: nth node of the list.
 * Return: pointer to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_head;

	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (i == index)
		{
			current_head = head;
			break;
		}
		else if (i > index)
		{
			current_head = NULL;
			break;
		}

		head = head->next;
		i++;
	}

	return (current_head);
}
