#include "monty.h"

void f_push(stack_t **stk, unsigned int num_line);

/**
 * f_push - add to the stack
 * @stk: stack
 * @num_line: line number
 */
void f_push(stack_t **stk, unsigned int num_line)
{
	int i = 0, num;
	stack_t *tmp, *new;
	
	new = *stk;
	if (*optok)
	{
		if (optok[0] == '-')
			i++;
		for (;optok[i] != '\0'; i++)
		{
			if (optok[i] > 57 || optok[i] < 48)
			{
				fprintf(stderr, "L%d: usage: push integer\n", num_line);
				_free(*stk);
				exit(EXIT_FAILURE);
			}
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", num_line);
		_free(*stk);
		exit(EXIT_FAILURE);
	}
	num = atoi(optok);
	tmp = malloc(sizeof(stack_t));
	if (tmp == NULL)
	{
		fprintf(stderr,"ERROR");
		exit(0);
	}
	if (new)
	{
		new->prev = tmp;
	}
	tmp->n = num;
	tmp->next = *stk;
	tmp->prev = NULL;
	*stk = tmp;
}
