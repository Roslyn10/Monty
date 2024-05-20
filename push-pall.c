#include "monty.h"

/**
 * f_push - Opcode that pushes an elements to the stack
 * Description - Pushes a value onto the stack
 * @stack: Pointer to pointer to the head of the stack
 * @line_number: Number of lines
 * @arg: Argument passed to monty
 * Return: NO return (nothing)
 */

void f_push(stack_t **stack, char *arg, unsigned int line_number)
{
	int value;
	stack_t *new_node;

	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	value = atoi(arg);

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;
}

/**
 * f_pall - An opcode that prints all the values on the stack
 * Description - Prints the values on the stack starting from the top
 * @head: Pointer to pointer to the ead of the stack
 * @counter: Number of lines
 * Return: No return (nothing)
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void) counter;

	h = *head;
	if (h == NULL)
	{
		return;
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

}
