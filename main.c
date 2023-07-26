#include "monty.h"
void empty(void);
global_t global = {{NULL}, NULL, NULL, NULL};
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *filename;
	size_t n = 0;
	int num_chars = 0;
	unsigned int line_num = 1;
	void (*get_fun)(stack_t **, unsigned int);
	stack_t *ptr;
	stack_t *temp;

	filename = argv[1];
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	global.fptr = fopen(filename, "r");
	if (global.fptr == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((num_chars = getline(&global.line, &n, global.fptr) != -1))
	{
		parse_line(global.line);
		if (global.line_cpy[0] == NULL || global.line_cpy[0][0] == '#')
		{
			line_num++;
			continue;
		}
		get_fun = op_fun(global.line_cpy[0]);
		if (get_fun == NULL)
		{
			dprintf(2, "L%u: unknown instruction %s\n", line_num, global.line_cpy[0]);
			exit_status();
		}
		get_fun(&global.stack, line_num);
		line_num++;
	}
	ptr = global.stack;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	free(global.line);
	fclose(global.fptr);
	return (0);
}
