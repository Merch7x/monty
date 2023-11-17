#include "monty.h"


int main(int ac, char **av)
{
	if (ac == 1 || ac > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_from_stream(av);
	return (0);
}
