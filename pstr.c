#include "monty.h"
/**
 * pstr -  prints string starting at top of stack, followed by a \n
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	(void) line_number;
	ptr = *stack;
	while (ptr != NULL && ptr->n != 0 && ptr->n >= 0 && ptr->n <= 127)
	{
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}
