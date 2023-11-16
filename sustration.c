#include "kensa.h"
/**
  *ft_sub- program entry point
  *@hed: header for the stack
  *@kount: line_num
  *Return: return void
 */
void ft_sub(stack_t **hed, unsigned int kount)
{
	stack_t *aux;
	int sus, nodes;

	aux = *hed;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", kount);
		fclose(bus.file);
		free(bus.content);
		frii_stuck(*hed);
		exit(EXIT_FAILURE);
	}
	aux = *hed;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*hed = aux->next;
	free(aux);
}
