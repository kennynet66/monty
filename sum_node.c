#include "kensa.h"
/**
 * addnode - program entry point
 * @hed: header for the stack
 * @n: new_val
 * Return: return nothing
*/
void addnode(stack_t **hed, int n)
{

	stack_t *new_node, *aux;

	aux = *hed;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *hed;
	new_node->prev = NULL;
	*hed = new_node;
}
