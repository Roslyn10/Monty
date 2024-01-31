#include "monty.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argv;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
