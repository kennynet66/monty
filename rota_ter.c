#include "kensa.h"
/**
  *ft_rotr- program entry point
  *@hed: head of the stack
  *@kount: line_number
  *Return: return nothing
*/
void ft_rotr(stack_t **hed, __attribute__((unused)) unsigned int kount)
{
stack_t *copy;

copy = *hed;
if (*hed == NULL || (*hed)->next == NULL)
{
return;
}
while (copy->next)
{
copy = copy->next;
}
copy->next = *hed;
copy->prev->next = NULL;
copy->prev = NULL;
(*hed)->prev = copy;
(*hed) = copy;
}
