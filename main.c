#include "monty.h"


int main(int ac, char **av)
{
	FILE *bytecode;

	if (ac == 1 || ac > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	bytecode = fopen(av[1], "r");

	if (bytecode == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("Fucker is opening\n");
	}
	return (0);
}
