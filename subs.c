#include "monty.h"

/**
 * adds_es_in_stack - add 1st 2 elements in a stack
 * @stack: the stack
 * @line_number: line #
 */
void adds_es_in_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int difference = 0;

	(void) line_number;
	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		difference = (*stack)->next->n - tmp->n;

		*stack = (*stack)->next;
		(*stack)->n = difference;
		(*stack)->prev = NULL;
		free(tmp);
	}
	else
	{
		fclose(command_struct.file);
		fprintf(stderr, "L%d: can't sub, stack too short\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
}
