#include "monty.h"

instruction_t operations[] = 
{
	{"push", &push},
	{"pall", &pall},
	{"pint", &pint},
	{"pop", &pop},
	{"swap", &swap},
};

const int builtin_size = sizeof(operations) / sizeof(instructions_t);

/**
 * ops - comparison - compare args with set operations
 * @args: arguments to compare
 * Return: 0 or 1
 */ 
int ops_comparison(char **args)
{
	int i;

	for (i = 0; i < buitlin_size; i++)
	{
		if (strcmp(args[0], operations[i].opcode) == 0)
		{
			return ((*operations[i].f)(stack_t **stack, unsigned int line_number))
		}
	}
	return (0);
}
