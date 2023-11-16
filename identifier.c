#include "monty.h"

/**
 * cmd_identifier - the identifier of the command
 * @opcode: the checked command
 * Return: the funct if not return NULL
 */
void (*cmd_identifier(char *opcode))(stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t array[] = {
		{"push", pusher},
		{"pall", print_elements},
		{"pint", print_int_at_top},
		{"pop", deletes_int_at_top},
		{"swap", swap},
		{"add", adds_element},
		{"nop", annuls},
		{"sub", adds_es_in_stack},
		{"div", divider_m},
		{"mul", multiplies_es},
		{"mod", mod_in_stack},
		{"pchar", palls_char},
		{"pstr", palls_str},
		{"rotl", rotate_at_top},
		{"rotr", rotate_at_bottom},
		{NULL, NULL}
	};

	if (!opcode)
		return (NULL);

	i = 0;
	while (array[i].opcode)
	{
		if (strcmp(opcode, array[i].opcode) == 0)
			return (array[i].f);
		
		i++;
	}

	return (NULL);
}
