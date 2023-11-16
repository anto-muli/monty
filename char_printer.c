#include "monty.h"
/**
 * palls_char - prints the char at the top of the stack
 * followed by a new line.
 * @stack: pointer to the first node in the stack
 * @line_number: the command argument (int)
 */
void palls_char(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (!(*stack))
	{
		fclose(command_struct.file);
		fprintf(stderr, "L%d: can't pchar, stack empty\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
	else if (ascii_within_range((*stack)->n))
	{
		fclose(command_struct.file);
		stack_liberator(*stack);
		fprintf(stderr, "L%d: can't pchar, value out of range\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%c\n", (*stack)->n);
}

/**
 * ascii_within_range - checks if the ascii value is a chars
 * @element: the checked value
 * Return: returns 1if its true an 0 if not
 */
int ascii_within_range(int element)
{
	if ((element < 65 || element > 90) &&
			(element < 97 || element > 122))
		return (1);
	return (0);
}
