#include "monty.h"
/**
 * stack_liberator - frees a stack
 * @stack: pointer stack's 1st node
 */
void stack_liberator(stack_t *stack)
{
	stack_t *current;

	while (stack)
	{
		current = stack;
		stack = stack->next;
		free(current);
	}
}
