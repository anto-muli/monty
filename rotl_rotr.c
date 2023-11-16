#include "monty.h"

/**
 * rotate_at_top - will rotate the stack at the top.
 * @stack: pointer to the stack's 1st node
 * @line_number: cmd args
 * Description: The 1st element in a stack becomes the last one
 * & the 2nd top element of the stack becomes the 1st one
 */
void rotate_at_top(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *current;

	(void) line_number;
	if (!(*stack) || !(*stack)->next)
		return;

	tmp = *stack;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	current = *stack;

	while (current->next)
		current = current->next;
	current->next = tmp;
	tmp->prev = current;
	tmp->next = NULL;
}

/**
 * rotate_at_bottom -  rotates the stack from the bottom.
 * @stack: pointer to 1st node in a stack
 * @line_number: the cmd args
 * Description: The last element in the stack
 * become the 1st element
 */
void rotate_at_bottom(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *last;

	(void) line_number;
	if (!(*stack) || !(*stack)->next)
		return;

	current = *stack;
	while (current->next)
	{
		last = current;
		current = current->next;
	}
	last->next = NULL;
	current->next = *stack;
	current->prev = NULL;
	(*stack)->prev = current;
	*stack = current;
}
