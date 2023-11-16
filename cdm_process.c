#include "monty.h"

/**
 * args_checker - the command checker
 * @av: the args vector
 * @line_no: the current cmd line #
 * Return: only valid args
 */
unsigned int args_checker(char *av[], unsigned int line_no)
{
	unsigned int value = 0;
	int i;

	if (command_checker(av[0]) != 0)
	{
		if (av[1] == NULL)
		{
			fclose(command_struct.file);
			stack_liberator(command_struct.head);
			fprintf(stderr, "L%d: usage: push integer\n", line_no);
			exit(EXIT_FAILURE);
		}
		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] > 57 || av[1][i] < 48)
			{
				if (av[1][i] != '-')
				{
					fclose(command_struct.file);
					stack_liberator(command_struct.head);
					fprintf(stderr, "L%d: usage: push integer\n", line_no);
					exit(EXIT_FAILURE);
				}
			}
			i++;
		}
		value = (unsigned int)atoi(av[1]);
	}
	return (value);
}

/**
 * process_command -  the process cmd
 * @cmd: the command
 * @line_no: the #r to be added to stack
 */
void process_command(char *cmd, unsigned int line_no)
{
	char *av[2];
	void (*func)(stack_t **stack, unsigned int line_number);
	unsigned int value;

	av[0] = strtok(cmd, " \t\r\n\v\f");
	if (av[0] == NULL)
		return;
	if (switch_between_modes(av[0]))
		return;
	if (comment_checker(av[0]) == 0)
		return;
	av[1] = strtok(NULL, " \t\r\n\v\f");

	func = cmd_identifier(av[0]);
	if (func == NULL)
	{
		fclose(command_struct.file);
		stack_liberator(command_struct.head);
		fprintf(stderr, "L%d: unknown instruction %s\n", line_no, av[0]);
		exit(EXIT_FAILURE);
	}
	value = args_checker(av, line_no);

	/*  Run the command */

	func(&command_struct.head, value);
}
