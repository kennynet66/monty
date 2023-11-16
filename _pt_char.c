#include "kensa.h"
/**
 * f_ptchar - function entry point
 * @hed: start of the stack
 * @kount: line_number
 * Return: return nothing
*/
void f_ptchar(stack_t **hed, unsigned int kount)
{
	stack_t *h;

	h = *hed;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", kount);
		fclose(bus.file);
		free(bus.content);
		frii_stuck(*hed);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", kount);
		fclose(bus.file);
		free(bus.content);
		frii_stuck(*hed);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
