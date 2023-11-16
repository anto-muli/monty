#include "monty.h"

/**
 * outputs_lines_in_file - outputs a line from a file
 */
void outputs_lines_in_file(void)
{
	char buffer[1024];

	while (fgets(buffer, 1024, command_struct.file) != NULL)
	{
		buffer[strlen(buffer)] = '\0';

		/* printf("%s\n", buffer); */
		process_command(buffer, command_struct.line_number);
		command_struct.line_number++;
	}
}
