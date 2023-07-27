#include "monty.h"
/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	stack_t *temp;
	stack_t *last_ptr;

	(void)line_number;
	ptr = *stack;
	temp = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->prev->next = NULL;
	last_ptr = ptr;
	last_ptr->next = temp;
	last_ptr->prev = NULL;
	temp->prev = last_ptr;
	*stack = last_ptr;
}
