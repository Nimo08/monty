#include "monty.h"
/**
 * add - adds the two top two elements of the stack
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*stack)->next;
	ptr2->n = (*stack)->n + ptr2->n;
	pop(&(*stack), line_number);
}
