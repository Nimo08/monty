#include "monty.h"
/**
 * pushnode - adds an element into the stack or queue
 * @h: pointer to pointer
 * @n: int
 * Return: new node, or NULL if it failed
 */
stack_t *pushnode(stack_t **h, const int n)
{
	stack_t *ptr;
	stack_t *temp;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (*h == NULL)
	{
		*h = temp;
		temp->prev = NULL;
		return (temp);
	}
	ptr = *h;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;
	return (temp);
}
