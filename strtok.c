#include "monty.h"
/**
 * parse_line - tokenize line
 * @line: string to be tokenized
 * Return: nothing
 */
void parse_line(char *line)
{
	char *token = NULL;
	const char *delim = " \t\n\r";
	int num_tok = 0;

	token = strtok(line, delim);
	while (token != NULL)
	{
		global.line_cpy[num_tok] = token;
		token = strtok(NULL, delim);
		num_tok++;
	}
	global.line_cpy[num_tok] = NULL;
}
