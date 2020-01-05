#include "monty.h"
/**
  *main - function main
  *@ac: argument count
  *@argv: argument
  *Return: int
  */
int main(int ac, char *argv[])
{
	FILE *fp;
	unsigned int i, j;
	char *opcode = NULL, *opcode_arg = NULL, *line = NULL, *token = NULL;
	ssize_t read = 0;
	size_t len = 0;

	if (ac == 2)
	{
		fp = fopen(argv[1], "r");
		if (fp == NULL)
		{
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		for (i = 1; (read = getline(&line, &len, fp)) != -1; i++)
		{
			token = strtok(line, " \n");
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
				token = strtok(NULL, " \n");
			}
		}
		fclose(fp);
	}
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
