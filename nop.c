#include "monty.h"
/**
 * nop - does not do anything
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) **stack;
	(void) line_number;
}
