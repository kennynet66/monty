#include "kensa.h"
/**
* execute - function entry point
* @stack:  head of the linked list - stack
* @kount: line_counter
* @file: points to monty file
* @content: line content
* Return: return nothing
*/
int execute(char *content, stack_t **stack, unsigned int kount, FILE *file)
{
	instruction_t opst[] = {
				{"push", ft_push}, {"pall", friend}, {"pint", ft_pint},
				{"pop", ft_pop},
				{"swap", ft_swap},
				{"add", ft_add},
				{"nop", ft_nop},
				{"sub", ft_sub},
				{"div", ft_div},
				{"mul", ft_mul},
				{"mod", ft_mod},
				{"pchar", f_ptchar},
				{"pstr", ft_pstr},
				{"rotl", ft_rotl},
				{"rotr", ft_rotr},
				{"queue", ft_queue},
				{"stack", ft_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, kount);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", kount, op);
		fclose(file);
		free(content);
		frii_stuck(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
