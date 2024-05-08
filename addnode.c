#include "monty.h"

/**
 * new_node - A function that creates a new node
 * Description - Creates a new node
 * @n: The integer
 * Return: The new node
 */


stack_t *new_node(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

/**
 * addnode - A function that adds a new node to the stack
 * Description - Adds a node to the stack
 * @head: A pointer to a pointer to the head of the node
 * @n: An integer
 * Return: No return (nothing)
 */

void addnode(stack_t **head, int n)
{
	stack_t *newNode = new_node(n);

	newNode->next = *head;
	*head = newNode;
}
