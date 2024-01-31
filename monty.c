#include "monty.h"
#include <stdio.h>

/**
 * main - Main entry point of monty
 * Description - Entry point
 * @argc: Number of arguments 
 * @argv:
 * Return:
 */


int main(int argc, char **argvi[])
{
	(void) argv;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
