#include "monty.h"

/**
 * nop - An opcode that does noting
 * Description - Doesnt do anything
 * Return - No return (nothing)
 */

int nop(void)
{
	return (0);
}

/**
 * free_stack - A function that frees the stack
 * Description - Frees the stack when done
 * @stack: a pointer to the head of the stack
 * Return: No return (nothing)
 */

void free_stack(stack_t *stack)
{
	stack_t *current = stack;
	stack_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
