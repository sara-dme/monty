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

/**
 * free_tok - frees the array of string 
 */
/*void free_tok(void)
{
	size_t i = 0;

	if (optok == NULL)
		return;
	for (i = 0; optok[i]; i++)
		free(optok[i]);
	free(optok);
}*/
