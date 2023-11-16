#include "monty.h"

/**
 * switch_between_modes - switches btwn queues and stacks
 * @cmd: the checked cmd
 * Return: 1 if the cmd switch is valid and else 0
 */
int switch_between_modes(char *cmd)
{
	if (strcmp("queue", cmd) == 0)
	{
		command_struct.is_stack = false;
		return (1);
	}
	else if (strcmp("stack", cmd) == 0)
	{
		command_struct.is_stack = true;
		return (1);
	}
	else
	{
		return (0);
	}
}
