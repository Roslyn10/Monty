#include "monty.h"

/**
 * new_node - A function that creates a new node
 * Description - Creates a new node
 * @n: The integer 
 * Return: The new node
 */


struct stack_s *new_node(int n)
{
	struct stack_s *node = (struct stack_s*)malloc(sizeof(struct stack_s));
	if (node == NULL)
	{
		printf("Error\n");
		exit(EXIT_FALIURE);
	}
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return node;
}
