#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to pointer
 * @line_number: unsigned int
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	if (*stack == NULL)
	{
		dprintf(2, "L<line_number>: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
