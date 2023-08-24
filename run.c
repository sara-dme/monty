#include "monty.h"

/**
 * run - execute the opcode
 * @op: op to check
 * @stk: stack
 * @num_line: number of line
 */
void run(char *op, stack_t **stk, unsigned int num_line)
{
	instruction_t instr_op[] = {
				{"push", _push},
				{"pall", _pall},
				{"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"nop", _nop},
				{NULL, NULL}
				};
	unsigned int i = 0;

	for (i = 0; instr_op[i].opcode != NULL; i++)
		{
			if (strcmp(instr_op[i].opcode, op) == 0)
			{
				instr_op[i].f(stk, num_line);
				return;
			}
		}
		fprintf(stderr, "L%d: unknown instruction %s\n", num_line, op);
		_free(*stk);
		exit(EXIT_FAILURE);
}
