#include "monty.h"

/**
 * run - execute the opcode
 * @stk: stack
 * @num_line: number of line
 */
void run(stack_t **stk, unsigned int num_line)
{
	instruction_t op[] = {
				{"push", f_push},
				{NULL, NULL}
				};
	unsigned int i = 0;
		
	while (op[i].opcode != NULL)
		{
			if (strcmp(op[i].opcode, optok) == 0)
			{
				op[i].f(stk, num_line);
				return; 
			}
			i++;
		}
	if (optok && op[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", num_line, optok);
		_free(*stk);
		exit(EXIT_FAILURE);
	}
}
