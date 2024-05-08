#include "monty.h"

/**
 * f_pint - Opcode that prints the value at the top of the stack
 * Description - Prints the value at the top of the stack
 * @head: Pointer to pointer to the head of the stack
 * @counter: Number of lines
 * Return: No return (nothing)
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);

}
