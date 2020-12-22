#include "monty.h"

/**
 *push - start point
 *@new_data: data
 *@head_ref: head pointer
 *Return:void
 */

void push(struct Node **head_ref, int new_data)
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

