#include "monty.h"
/**
 * sub - subtracts top element of stack from second top element of stack
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*stack)->next;
	ptr2->n = ptr2->n - (*stack)->n;
	pop(&(*stack), line_number);
}
