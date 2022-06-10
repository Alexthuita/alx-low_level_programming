#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (-1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return (1);
}

