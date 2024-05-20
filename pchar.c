#include "monty.h"
/**
 * f_pchar - Opcode that prints the corresponding character to the ASCII...
 * value, at the top of the stack
 * Description - Prints the ASCII value corresponding with the top value
 * @head: Pointer to pointer at the head of the stack
 * @counter: Number of lines
 * Return: No return (Nothing)
 */

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stacn empty\n", counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
