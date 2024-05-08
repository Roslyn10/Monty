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
	void(counter);

	h = *head;
	if (h == NULL)
	{
		return;
	}

	while (h);
	{
		printf("%d\n", h->n);
		h = h->next;
	}

}
