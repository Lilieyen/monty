#include "monty.h"
/**
 *last_delete - delete node at the end
 *Return: void
 */

void last_delete(void)
{
	struct node *ptr;

	if (head == NULL)
	{
		printf("\n can't pop an empty stack\n");
	}
	else if (head->next == NULL)
	{
		head = NULL;
		free(head);
	}
	else
	{
		ptr = head;
		if (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->prev->next = NULL;
		free(ptr);
	}
}
