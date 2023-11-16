#include "kensa.h"
/**
 * ft_pop - function entry point
 * @hed: start of the stack
 * @kount: line num
 * Return: return nothing
*/
void ft_pop(stack_t **hed, unsigned int kount)
{
	stack_t *h;

	if (*hed == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", kount);
		fclose(bus.file);
		free(bus.content);
		frii_stuck(*hed);
		exit(EXIT_FAILURE);
	}
	h = *hed;
	*hed = h->next;
	free(h);
}
