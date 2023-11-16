#include "monty.h"
/**
 * file_opener - the file opener
 * @pathname: chars pointer to all pathname
 * or the real filename
 */
void file_opener(char *pathname)
{
	command_struct.file = fopen(pathname, "r");
	if (command_struct.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", pathname);
		exit(EXIT_FAILURE);
	}
	outputs_lines_in_file();
	fclose(command_struct.file);
	stack_liberator(command_struct.head);
}
