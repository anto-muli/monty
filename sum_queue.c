#include "monty.h"

/**
 * append_queue - appends the 1st 2 elements to the queue
 * @queue: a pointer queue's last element
 */
void append_queue(stack_t **queue)
{
	stack_t *first, *second;
	int sum = 0;

	if (*queue && (*queue)->next)
	{
		first = *queue;

		while (first->next)
		{
			second = first;
			first = first->next;
		}
		sum = first->n + second->n;

		second->next = NULL;
		second->n = sum;

		free(first);
	}
	else
	{
		fclose(command_struct.file);
		fprintf(stderr, "L%d: can't add, queue too short\n",
				command_struct.line_number);
		exit(EXIT_FAILURE);
	}
}
