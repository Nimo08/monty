#include "monty.h"
/**
 * op_fun - gets the opcode functions
 * @s: char ptr
 * Return: nothing
 */
void (*op_fun(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_t op_code[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL},
	};
	int i = 0;

	while (op_code[i].opcode != NULL)
	{
		if (strcmp(s, op_code[i].opcode) == 0)
		{
			return (op_code[i].f);
		}
		i++;
	}
	return (NULL);
}