#include "kensa.h"
/**
  *ft_rotl- program entry point
  *@hed: stack head
  *@kount: line_number
  *Return: return nothing
 */
void ft_rotl(stack_t **hed,  __attribute__((unused)) unsigned int kount)
{
	stack_t *tmp = *hed, *aux;

	if (*hed == NULL || (*hed)->next == NULL)
	{
		return;
	}
	aux = (*hed)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *hed;
	(*hed)->next = NULL;
	(*hed)->prev = tmp;
	(*hed) = aux;
}
