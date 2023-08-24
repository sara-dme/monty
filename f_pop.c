#include "monty.h"

/**
 * _pop - remove the top
 * @stack: stack
 * @num_line: line number
 */
void _pop(stack_t **stack, unsigned int num_line)
{
	stack_t *pop;

	if (*stack != NULL)
	{
		pop = *stack;
		*stack = (*stack)->next;
		if (*stack != NULL)
			(*stack)->prev = NULL;
		free(pop);
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num_line);
		exit(EXIT_FAILURE);
	}
}
