#include "monty.h"
#include <stdio.h>

/**
 * main - Main entry point of monty
 * Description - Entry point
 * @argc: Number of arguments 
 * @argv:
 * Return:
 */


int main(int argc, char **argv[])
{
	FILE *file = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");


	if (!file)
	{
		fprintf(stderr, "Error: Can't open file file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
