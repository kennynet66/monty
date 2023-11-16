#include "kensa.h"
/**
 * ft_push - program entry point
 * @hed: start of the stack
 * @kount: line num
 * Return: return nothing
*/
void ft_push(stack_t **hed, unsigned int kount)
{
	int n, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", kount);
			fclose(bus.file);
			free(bus.content);
			frii_stuck(*hed);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", kount);
		fclose(bus.file);
		free(bus.content);
		frii_stuck(*hed);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(hed, n);
	else
		addqueue(hed, n);
}
