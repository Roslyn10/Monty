#include "monty.h"

/**
 * f_push - Opcode that pushes an elements to the stack
 * Description - Pushes a value onto the stack
 * @head: Pointer to pointer to the head of the stack
 * @counter: Number of lines
 * Return: NO return (nothing)
 */

void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addnode_end(head, n);
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
