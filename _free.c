#include "monty.h"

void _free(stack_t *stk);

/**
 * _free - free a stack
 * @stk: stack
 */
void _free(stack_t *stk)
{
	stack_t *tmp;

	while (stk != NULL)
	{
		tmp = stk->next;
		free(stk);
		stk = tmp;
	}
}
