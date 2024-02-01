#include "monty.h"

/**
 * sub - Opcode that subracts the top two values on the stack
 * Description - Subtracts the top two values 
 * @head: Pointer to pointer to the head of the stack
 * @counter: Number of lines
 * Return: No return (nothing)
 */

void sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
