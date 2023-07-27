#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	stack_t *temp;
	stack_t *new_ptr;

	(void)line_number;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	new_ptr = *stack;
	temp = *stack;
	ptr = (*stack)->next;
	while (new_ptr->next != NULL)
	{
		new_ptr = new_ptr->next;
	}
	temp->prev = new_ptr;
	new_ptr->next = temp;
	temp->next = NULL;
	ptr->prev = NULL;
	*stack = ptr;
}
