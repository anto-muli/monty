#include "monty.h"

/**
 * command_checker - checks if the cmd isa pall, pop,or pint
 * @cmd: the checkedcommand
 * Return: 1 on success or 0 on failure
 */
int command_checker(char *cmd)
{
	if ((strcmp("pall", cmd) != 0) && (strcmp("pint", cmd) != 0) &&
			(strcmp("pop", cmd) != 0) && (strcmp("swap", cmd) != 0) &&
			(strcmp("add", cmd) != 0) &&
			(strcmp("nop", cmd) != 0) &&
			(strcmp("sub", cmd) != 0) &&
			(strcmp("div", cmd) != 0) &&
			(strcmp("mul", cmd) != 0) &&
			(strcmp("mod", cmd) != 0) &&
			(strcmp("pchar", cmd) != 0) &&
			(strcmp("pstr", cmd) != 0) &&
			(strcmp("rotl", cmd) != 0) &&
			(strcmp("rotr", cmd) != 0))
		return (1);
	return (0);
}
