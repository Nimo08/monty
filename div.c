#include "monty.h"
/**
 * _div - divides second top element of stack by top element of stack
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr2;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*stack)->next;
	if ((*stack)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	ptr2->n = ptr2->n / (*stack)->n;
	pop(&(*stack), line_number);
}
