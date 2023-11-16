#include "kensa.h"
/**
 * ft_pstr - program entry point
 * @hed: head of stack
 * @kount: line_number
 * Return: return nothing
*/
void ft_pstr(stack_t **hed, unsigned int kount)
{
stack_t *h;
(void)kount;

h = *hed;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
