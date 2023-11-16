#include "kensa.h"
/**
 * ft_mod - program entry point
 * @hed: head of stack
 * @kount: line_number
 * Return: return nothing
*/
void ft_mod(stack_t **hed, unsigned int kount)
{
stack_t *h;
int len = 0, aux;

h = *hed;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", kount);
fclose(bus.file);
free(bus.content);
frii_stuck(*hed);
exit(EXIT_FAILURE);
}
h = *hed;
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", kount);
fclose(bus.file);
free(bus.content);
frii_stuck(*hed);
exit(EXIT_FAILURE);
}
aux = h->next->n % h->n;
h->next->n = aux;
*hed = h->next;
free(h);
}
