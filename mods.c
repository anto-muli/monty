#include "monty.h"

/**
 * mod_in_stack - mods 1st 2 in a stack
 * @stack: the stack
 * @line_number: line #
 */
void mod_in_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int result = 0;

	(void) line_number;
	if (*stack && (*stack)->next)
	{
		if ((*stack)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n",
					command_struct.line_number);
			fclose(command_struct.file);
			stack_liberator(*stack);
			exit(EXIT_FAILURE);
		}
		tmp = *stack;
		result = (*stack)->next->n % tmp->n;
		*stack = (*stack)->next;
		(*stack)->n = result;
		(*stack)->prev = NULL;

		free(tmp);
	}
	else
	{
		fclose(command_struct.file);
		fprintf(stderr, "L%d: can't mod, stack too short\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
}
