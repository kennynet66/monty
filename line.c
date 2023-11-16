#include "kensa.h"
/**
 * ft_queue - program entry point
 * @hed: start of the stack
 * @kount: line_number
 * Return: return nothing
*/
void ft_queue(stack_t **hed, unsigned int kount)
{
	(void)hed;
	(void)kount;
	bus.lifi = 1;
}

/**
 * addqueue - program entry point
 * @n: new val
 * @hed: header for the stack
 * Return: return nothing
*/
void addqueue(stack_t **hed, int n)
{
	stack_t *new_node, *aux;

	aux = *hed;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*hed = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
