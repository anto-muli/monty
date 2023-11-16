#include "monty.h"
/**
 * print_elements - print the elements in the stack when using FILO
 * command
 * @stack: the stacks
 * @line_number: The line #s
 */
void print_elements(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;
	while (current)
	{
		fprintf(stdout, "%d\n", current->n);
		current = current->next;
	}
}
