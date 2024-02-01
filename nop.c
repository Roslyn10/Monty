#include "monty.h"

/**
 * nop - An opcode that does noting
 * Description - Doesnt do anything
 * Return - No return (nothing)
 */

void nop(void)
{
	/**This function does nothing**/
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
