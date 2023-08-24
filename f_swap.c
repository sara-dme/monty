#include "monty.h"

/**
 * _swaop - swap top two element of stack
 * @stack: double pointer to head of stack
 * @num_line: line number
 */
void _swap(stack_t **stack, unsigned int num_line)
{
	stack_t *tmp;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num_line);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next->next;
	(*stack)->next->next = tmp->next;
	(*stack)->next->prev = tmp;
	if (tmp->next)
		tmp->next->prev = (*stack)->next;
	tmp->next = (*stack)->next;
	tmp->prev = *stack;
	(*stack)->next = tmp;
}
