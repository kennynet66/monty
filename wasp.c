#include "kensa.h"
/**
 * ft_swap - program entry point
 * @hed: start of the stack
 * @kount: line num
 * Return: return nothing
*/
void ft_swap(stack_t **hed, unsigned int kount)
{
	stack_t *h;
	int lngth = 0, aux;

	h = *hed;
	while (h)
	{
		h = h->next;
		lngth++;
	}
	if (lngth < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", kount);
		fclose(bus.file);
		free(bus.content);
		frii_stuck(*hed);
		exit(EXIT_FAILURE);
	}
	h = *hed;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
