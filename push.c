#include "monty.h"
/**
 * push - adds an element into the stack or queue
 * @stack: pointer to pointer
 * @line_number: unsigned int
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int cnt = 0;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (global.line_cpy[1] == NULL)
	{
		free(temp);
		dprintf(2, "L%u: usage: push integer\n", line_number);
		exit_status();
	}
	if (global.line_cpy[1][0] == '-')
	{
		cnt++;
	}
	while (global.line_cpy[1][cnt] != '\0')
	{
		if (!isdigit(global.line_cpy[1][cnt]))
		{
			free(temp);
			dprintf(2, "L%u: usage: push integer\n", line_number);
			exit_status();
		}
		cnt++;
	}
	temp->n = atoi(global.line_cpy[1]);
	temp->prev = NULL;
	temp->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = temp;
	}
	*stack = temp;
}
