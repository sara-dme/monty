#include "monty.h"

/**
 * _pint - prints the value of the top
 * @stack: stack
 * @num_line: line num
 */
void _pint(stack_t **stack, unsigned int num_line)
{
	if (*stack != NULL)
		printf("%d\n", (*stack)->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", num_line);
		exit(EXIT_FAILURE);
	}
}
