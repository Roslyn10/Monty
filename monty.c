#include "monty.h"
#include <stdio.h>

#define MAX_LINE_LENGTH 200

/**
 * execute_opcode - A function that is used to execute the opcodes
 * Description - Executes the opcodes
 * @stack: The stack
 * @opcode: The opcodes
 * @line_number: The line number
 * Return: No return (nothing)
 */

void execute_opcode(stack_t **stack, const char *opcode, int line_number)
{
	if (strcmp(opcode, "nop") == 0)
	{
		nop();
	}
	else if (strcmp(opcode, "add") == 0)
	{
		add(stack, line_number);
	}
	else if (strcmp(opcode, "f_div") == 0)
	{
		f_div(stack, line_number);
	}
	else if (strcmp(opcode, "mul") == 0)
	{
		mul(stack, line_number);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		pop(stack, line_number);
	}
	else if (strcmp(opcode, "sub") == 0)
	{
		sub(stack, line_number);
	}
	else if (strcmp(opcode, "swap") == 0)
	{
		swap(stack, line_number);
	}
	else if (strcmp(opcode, "push") == 0)
	{
		f_push(stack, NULL, line_number);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		f_pall(stack, line_number);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		f_pint(stack, line_number);
	}
}

/**
 * process_command - A function that always returns 1
 * Description - Always returns 1
 * @stack: The stack
 * @opcode: The opcodes
 * @line_number: The line number
 * Return: 1 on Success, 0 on failure
 */

int process_command(stack_t **stack, char *opcode, unsigned int line_number)
{
	if (*stack || *opcode || line_number)
	{

	}

	return (1);
}

/**
 * main - Main entry point of monty
 * Description - Entry point
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 on Success and EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	int line_number = 0;
	FILE *file = fopen(argv[1], "r");
	stack_t *stack = NULL;
	char opcode[128];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(opcode, sizeof(opcode), file) != NULL)
	{
		line_number++;

		if (process_command(&stack, opcode, line_number) == 0)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			fclose(file);
			free_stack(stack);
			exit(EXIT_FAILURE);
		}
	}
	fclose(file);
	free_stack(stack);

	return (0);
}
