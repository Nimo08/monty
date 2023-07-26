#include "monty.h"
/**
 * mod - computes rest of division of 2nd top element of stack by 1st in stack.
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*stack)->next;
	if ((*stack)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr2->n = ptr2->n % (*stack)->n;
	pop(&(*stack), line_number);
}
