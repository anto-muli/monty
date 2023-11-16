#include "monty.h"
/**
 * comment_checker - if a command is a comment
 * @cmd: The command to check for.
 * Return: 0 True else 1 False
 */
int comment_checker(char *cmd)
{
	while (*cmd)
	{
		if (*cmd == 35)
			return (0);
		cmd++;
	}
	return (1);
}
