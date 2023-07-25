#include "monty.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fptr;
	const char *filename = "";
	char *input = NULL;
	size_t n = 0;
	int num_chars;
	int size = atoi(argv[1]);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (size < 1)
	{
		fprintf(stderr, "L<line_number>: unknown instruction <opcode>\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	num_chars = getline(&input, &n, stdin);
	if (num_chars == -1)
	{
		free(input);
		exit(EXIT_FAILURE);
	}
	free(input);
	fclose(fptr);
	return (0);
}
