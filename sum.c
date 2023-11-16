#include "monty.h"

/**
 * adds_element - sums the 1st 2 elements in a stack list
 * @stack: the stack list
 * @line_number: the line number in the stack
 */
void adds_element(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int sum = 0;

	(void) line_number;
	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		sum = tmp->n + (*stack)->next->n;

		*stack = (*stack)->next;
		(*stack)->n = sum;
		(*stack)->prev = NULL;

		free(tmp);
	}
	else
	{
		fclose(command_struct.file);
		fprintf(stderr, "L%d: can't add, stack too short\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
}
