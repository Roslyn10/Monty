#include "monty.h"

/**
 * f_pop - Opcode that removes the value at the top of the stack
 * Description - Removes the value at the top of the stack
 * @head: Pointer to pointer to head of the stack
 * @counter: Number of lines
 * Return: No return (nothing)
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
