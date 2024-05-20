#include "monty.h"

/**
 * add - Opcode that adds the two top values on a stack
 * Description - Adds the two top values on a stack
 * @head: Pointer to pointer to the head of a stack
 * @counter: Number of lines
 * Return: No return (nothing)
 */

void add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
