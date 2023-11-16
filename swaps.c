#include "monty.h"

/**
 * swap - switches the 1st 2 elements of the stack
 * @stack: the stack in question
 * @line_number: line #
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	stack_t *tmp;

	(void)line_number;
	if (*stack != NULL && (*stack)->next != NULL)
	{
		current = *stack;
		tmp = current->next;
		current->next = tmp->next;
		if (current->next)
		{
			current->next->prev = current;
		}
		tmp->next = current;
		tmp->prev = NULL;

		*stack = tmp;
	}
	else
	{
		fclose(command_struct.file);
		stack_liberator(*stack);
		fprintf(stderr, "L%d: can't swap, stack too short\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
}
