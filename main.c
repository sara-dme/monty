#include "monty.h"

/**
 * main - the entry point 
 * @argc: number of arg pased to th eprogram
 * @argv: pointer to an array of char
 * Return: (EXIT_SUCCESS) on success (EXIT_FAILURE) on error
 */
int main(int argc, char **argv)
{
	FILE *file = NULL;
	char *line = NULL, *opcode = NULL;
	size_t sz = 0;
	stack_t *stk = NULL;
	unsigned int num_line  = 0;
	
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	/*stk = malloc(sizeof(stack_t));
	if (stk == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}*/
	while (getline(&line, &sz, file) != -1)
	{
		num_line++;
		opcode = strtok(line, DELIM);
		if (opcode != NULL && opcode[0] != '#')
		{
			run(opcode, &stk, num_line);
		}
	}
	free(line);
	_free(stk);
	fclose(file);
	exit(EXIT_SUCCESS);
}
