#include "monty.h"

/**
 * _pall - print all
 * @stack: pointer to head
 * @num_line: line number
 */
void _pall(stack_t **stack, unsigned int num_line)
{
	stack_t *head;

	(void)(num_line);
	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
			return;
	}
}
