#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to pointer
 * @line_number: unsigned int
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
