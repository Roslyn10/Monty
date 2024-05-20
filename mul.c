#include "monty.h"

/**
 * mul - Opcode that multiplies the two top values on the stack
 * Desciption - Multiplies the two top values
 * @head: Pointer to pointer to head of stack
 * @counter: Number of lines
 * Return: No return (nothing)
 */

void mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
