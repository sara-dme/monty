#include "monty.h"

/**
 * pall_f - prints the values of a stack_t
 * @stk: a pointer to the top node of a stack
 * @num_line: the current working line number
 */
void pall_f(stack_t **stk, unsigned int num_line)
{
	stack_t *tmp;
	(void)num_line;

	tmp = *stk;
	if (tmp == NULL)
		return;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
