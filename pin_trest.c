#include "kensa.h"
/**
 * ft_pint - program entry point
 * @hed: start of the stack
 * @kount: line_number
 * Return: return nothing
*/
void ft_pint(stack_t **hed, unsigned int kount)
{
	if (*hed == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", kount);
		fclose(bus.file);
		free(bus.content);
		frii_stuck(*hed);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hed)->n);
}
