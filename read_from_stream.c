#include "monty.h"

/**
 * read_from_stream - tokenize lines from a file
 * @str: the strings to tokenize
 * Return: tokens
 *
 */
char **read_from_stream(char **str)
{
	FILE *bytecode;
	char *line = NULL, *token;
	size_t len = 0;
	ssize_t read;
	char **args;
	int i = 0;

	bytecode = fopen(str[1], "r");

	if (bytecode == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", str[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, bytecode)) != -1)
	{
		token = strtok(line, " \t\n");
		
		args = malloc(sizeof(char *) * (len + 1));
		while (token != NULL)
		{
			args[i] = token;
			token = strtok(NULL, " \t\n");
		}
		args[i] = NULL;
	}
	fclose(bytecode);
	return (args);
}

