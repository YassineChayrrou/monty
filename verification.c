#include "monty.h"
/**
  *verification: function that verifies
  *@op: instruction
  *@op_arg: argument of instruction
  *
  */
int verification(char **op,char **op_arg)
{
	int i;

	instruction_t *fns[] = {
		{"push", push_fn},
		{"pall", pall_fn},
		{NULL, NULL}
	}
	for (i = 0; fns[i].opcode; i++)
	{
		if (strcmp(fns[i].opcode, op) == 0)
			
	}
}
