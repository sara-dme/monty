#include "monty.h"

/**
 * _digit - check for digit
 * @arg: string to check
 * Return: 0 if digit or 1
 */
static int _digit(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0)
			continue;
		if (isdigit(arg[i] == 0))
			return (1);
	}
	return (0);
}
/**
 * _push - push an integer onto the stack
 * @stack: double pointer to the header
 * @num_line: line num
 */
void _push(stack_t **stack, unsigned int num_line)
{
	char *arg;
	int n;
	stack_t *new;

	arg = strtok(NULL, DELIM);
	if (arg == NULL || _digit(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", num_line);
		exit(EXIT_FAILURE);
	}
	n = atoi(arg);
	if (stack == NULL)
		return;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failled\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
