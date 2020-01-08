#include "monty.h"
/**
 *
 *
 */
void gettoken(char **line)
{
	char *token, *opcode, *opcode_arg;
	unsigned int j;
	token = strtok(*line, " \n");
	for (j = 0; token != NULL; j++)
	{
		if (j == 0)
		{
			opcode = strdup(token);
			printf("%s\n", opcode);
		}
		if (j == 1)
		{
			opcode_arg = strdup(token);
			printf("%s\n", opcode_arg);
		}
	}
}
