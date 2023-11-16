#include "monty.h"

instruction_t operations[] = 
{
	{"push", &push},
	{"pall", &pall},
	{"pint", &pint},
	{"pop", &pop},
	{"swap", &swap},
};

const int builtin_size = sizeof(commands) / sizeof(BuiltinCommand);


int ops_comparison(char **args
