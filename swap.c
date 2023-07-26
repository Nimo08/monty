#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr2;
	stack_t *ptr3;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*stack)->next;
	ptr3 = (*stack)->next->next;
	ptr2->next = *stack;
	(*stack)->next = ptr3;
	*stack = ptr2;
}
