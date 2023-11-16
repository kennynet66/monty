#include "kensa.h"
/**
 * friend - program entry point
 * @hed: start of stack
 * @kount: no counter
 * Return: return nothing
*/
void friend(stack_t **hed, unsigned int kount)
{
stack_t *h;
(void)kount;

h = *hed;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
