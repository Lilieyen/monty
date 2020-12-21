#include "monty.h"
/**
 *swapNodes - func that swaps adjacent nodes
 *@x: int
 *@y: int
 *@head_ref: head
 *Return: void
 */

void swapNodes(struct Node **head_ref, int x, int y)
{
	if (x == y)
		return;

	struct Node *prevx = NULL, *currx = *head_ref;

	while (currx && currx->data != x)
	{
		prevx = currx;
		currx = currx->next;
	}
	struct Node *prevy = Null, *curry = *head_ref;

	while (curry && curry->data != y)
	{
		prevy = curry;
		curry = curry->next;
	}

	if (currx == NULL || curry == NULL)
		return;
	if (prevx != NULL)
		prevx->next = curry;
	else
		*head_ref = curry;

	if (prevy != NULL)
		prevy->next = currx;
	else
		*head_ref = currx;


	struct Node *temp = curry->next;

	curyy->next = currx->next;
	currx->next = temp;
}
