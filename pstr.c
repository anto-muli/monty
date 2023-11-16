#include "monty.h"

/**
 * palls_str - outputs a str in a string
 * @stack: pointer to 1st node in a stack
 * @line_number: cmd args (int)
 */
void palls_str(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void)line_number;
	if (!(*stack))
	{
		fprintf(stdout, "\n");
		return;
	}
	while (tmp)
	{
		if (ascii_within_range(tmp->n))
		{
			fprintf(stdout, "\n");
			return;
		}
		fprintf(stdout, "%c", tmp->n);
		tmp = tmp->next;
	}
	fprintf(stdout, "\n");
}
