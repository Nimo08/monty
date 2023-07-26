#include "monty.h"
/**
 * exit_status - exit status
 * Return: nothing
 */
void exit_status(void)
{
	stack_t *ptr;
	stack_t *temp;

	ptr = global.stack;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	free(global.line);
	fclose(global.fptr);
	global.stack = NULL;
	exit(EXIT_FAILURE);
}
