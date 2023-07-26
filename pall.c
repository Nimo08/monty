#include "monty.h"
/**
 * pall - prints all elements
 * @stack: pointer to pointer
 * @line_number: unsigned int
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	size_t cnt = 0;

	(void) line_number;
	ptr = *stack;
	if (ptr == NULL)
	{
		return;
	}
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		cnt++;
	}
}
