#include "monty.h"

/**
 * print_int_at_top - prints the integer at the statrt/top of a stack
 * @stack: stack to be checked
 * @line_number: line#
 */
void print_int_at_top(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	if (*stack == NULL)
	{
		fclose(command_struct.file);
		fprintf(stderr, "L%d: can't pint, stack empty\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}

/**
 * deletes_int_at_top - deletes the top element of stack
 * @stack: stack
 * @line_number: line number
 */
void deletes_int_at_top(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	(void) line_number;
	if (*stack == NULL)
	{
		fclose(command_struct.file);
		fprintf(stderr, "L%d: can't pop an empty stack\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
	ptr = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(ptr);
}
