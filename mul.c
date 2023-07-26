#include "monty.h"
/**
 * mul - multiplies second top element of stack with top element of stack
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*stack)->next;
	ptr2->n = ptr2->n * (*stack)->n;
	pop(&(*stack), line_number);
}
