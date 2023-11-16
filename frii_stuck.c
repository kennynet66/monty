#include "kensa.h"
/**
* frii_stuck - program entry point
* @hed: start of the stack
* Return: nothing
*/
void frii_stuck(stack_t *hed)
{
	stack_t *aux;

	aux = hed;
	while (hed)
	{
		aux = hed->next;
		free(hed);
		hed = aux;
	}
}
