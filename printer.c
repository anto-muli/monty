#include "monty.h"

/**
 * printer_queues - prints the queue's element
 * @queue: pointer to queue's last element
 */
void printer_queues(stack_t **queue)
{
	stack_t *current;

	if (!(*queue))
		return;

	current = *queue;
	while (current->next)
		current = current->next;
	while (current)
	{
		fprintf(stdout, "%d\n", current->n);
		current = current->prev;
	}
}
